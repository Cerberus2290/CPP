/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:27:09 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/27 14:30:54 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int binarySearch(const std::string &targetdate, const std::vector<std::pair<std::string, double> > &input_data)
{
    int left = 0;
    int right = input_data.size() - 1;
    int mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (input_data[mid].first == targetdate)
            return mid;
        else if (input_data[mid].first < targetdate)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if (right < 0)
        return -1;
    else
        return right;
}

void printAndExecute(const std::vector<std::pair<std::string, std::string> > &input, const std::vector<std::pair<std::string, double> > &input_data)
{
    double  multi;
    int     index;

    for (std::vector<std::pair<std::string, std::string> >::const_iterator cito = input.begin(); cito != input.end(); ++cito)
    {
        if (cito->first == "bad" || cito->second == "bad")
            std::cout << "Error printAndExecute: bad input" << std::endl;
        else if (cito->second == "max")
            std::cout << "Error printAndExecute: input too large" << std::endl;
        else if (cito->second == "min")
            std::cout << "Error printAndExecute: input not positive" << std::endl;
        else
        {
            index = binarySearch(cito->first, input_data);
            multi = strtof(cito->second.c_str(), NULL) * input_data[index].second;
            std::cout << cito->first << " -> " << cito->second << " = " << multi << std::endl;
        }
    }
}

void fillDatabase(std::ifstream &file, std::vector<std::pair<std::string, double> > &input_data)
{
    int position;
    std::string line;
    std::string date;
    std::string value;
    double btc;

    std::getline(file, line);
    while (std::getline(file, line))
    {
        position = line.find(",");
        if (position != -1)
        {
            date = line.substr(0, position);
            value = line.substr(position + 1);
            btc = strtod(value.c_str(), NULL);
            input_data.push_back(std::make_pair(date, btc));
        }
    }
    file.close();
}

std::string isValidValue(const std::string &value)
{
    unsigned int i = 0;

    for (; i < value.length() && value[i] != ' '; i++);

    if (value.empty() || i != value.length())
        return "bad";
    else
    {
        char* endpointer = NULL;
        long lon = std::strtol(value.c_str(), &endpointer, 0);
        if (*endpointer == '\0')
        {
            if (lon > 1000)
                return "max";
            else if (lon < 0)
                return "min";
            return "int";
        }
        else
        {
            endpointer = NULL;
            float flo = std::strtof(value.c_str(), &endpointer);
            if (*endpointer == '\0' || (endpointer[0] == 'f' && endpointer[1] == 0))
            {
                if (flo > 1000)
                    return "max";
                if (flo < 0)
                    return "min";
                return "float";
            }
            else
                return "bad";
        }
    }
}

bool isValidDate(const std::string &date)
{
    char* endpointer = NULL;
    if (date.size() != 10)      //Date Format
        return false;
    int year = std::strtol(date.substr(0, 4).c_str(), &endpointer, 10);
    if (*endpointer != '\0' || year < 2009 || year > 9999 || date[4] != '-')
        return false;
    endpointer = NULL;
    int month = std::strtol(date.substr(5, 2).c_str(), &endpointer, 10);
    if (*endpointer != '\0' || month < 1 || month > 12 || date[7] != '-')
        return false;
    endpointer = NULL;
    int day = std::strtol(date.substr(8, 2).c_str(), &endpointer, 10);
    if (*endpointer != '\0' || day < 1 || day > 31 || (year == 2009 && month == 01 && day == 01))
        return false;
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;
    if (month == 2)
    {
        int max_day = 28;
        if (year % 4 == 0)
            max_day = 29;
                if ((year % 100 == 0 && year % 400 != 0) || (year % 400 == 0 && year % 4000 == 0))
                    max_day = 28;
        if (day > max_day)
            return false;
    }
    return true;
}

void flagInvalidInput(std::vector<std::pair<std::string, std::string> > &input)
{
    int i = 0;
    std::string value;

    for (std::vector<std::pair<std::string, std::string> >::const_iterator cito = input.begin(); cito != input.end(); cito++)
    {
        if (isValidDate(cito->first) == true)
        {
            value = isValidValue(cito->second);
            if (value == "bad")
                input[i].second = "bad";
            else if (value == "min")
                input[i].second = "min";
            else if (value == "max")
                input[i].second = "max";
        }
        else
            input[i].first = "bad";
        i++;
    }
}

bool fillInput(std::ifstream &file, std::vector<std::pair<std::string, std::string> > &input)
{
    int position;
    std::string line;
    std::string date;
    std::string value;

    while (std::getline(file, line))
    {
        position = line.find(" | ");
        if (position != -1)
        {
            date = line.substr(0, position);
            value = line.substr(position + 3);
            input.push_back(std::make_pair(date, value));
        }
        else
            input.push_back(std::make_pair("bad", "bad"));
    }
    if (input.size() == 0)
        return false;
    file.close();
    return true;
}

bool checkFile(const std::string filename, std::ifstream &file)
{
    file.open(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error checkFile: Cannot open file" << std::endl;
        file.close();
        return false;
    }
    return true;
}