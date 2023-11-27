/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:26:43 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/27 15:41:40 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../RPN.hpp"

int RPN::count = 0;
float RPN::value = 0;
float RPN::first = 0;
float RPN::second = 0;
std::string RPN::parameter = "";
std::stack<float> RPN::stack_value;
std::stack<char> RPN::operant;

// [**** Constructors ****]
RPN::RPN()
{}

RPN::RPN(const RPN& copy)
{}

// [**** Overload Assignment Operators ****]

RPN &RPN::operator=(const RPN &rhs)
{
    return *this;
}

// [**** Member Functions ****]
void RPN::wordCount(std::string parameter)
{
    std::stringstream ss;
    std::string word;
    ss << parameter;
    while (ss >> word)
        count++;
}

bool RPN::fillCheckString(std::string* array)
{
    std::stringstream ss(parameter);
    std::string word;
    for (int i = 0; i < count; i++)
    {
        ss >> array[i];
        if (array[i].length() != 1)
            return false;
        else if (!std::isdigit(array[i][0]) && array[i][0] != '+' && array[i][0] != '-' 
                && array[i][0] != '/' && array[i][0] != '*')
            return false;
    }
    return true;
}

bool RPN::handlePolish(std::string const *array)
{
    int i = 0;
    char 
}

// [**** Destructor ****]
