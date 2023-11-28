/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:26:43 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/28 07:22:10 by tstrassb         ###   ########.fr       */
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

RPN::RPN(const RPN&)
{}

// [**** Overload Assignment Operators ****]

RPN &RPN::operator=(const RPN&)
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
    char operant_char;

    while (i < count)
    {
        if (isdigit(array[i][0]))
        {
            value = atof(array[i].c_str());
            stack_value.push(value);
        }
        else if (!isdigit(array[i][0]) && stack_value.size() < 2)
            return false;
        else if (!isdigit(array[i][0]))
            operant.push(array[i][0]);
        if (stack_value.size() >= 2 && operant.size() >= 1)
        {
            operant_char = operant.top();
            operant.pop();
            second = stack_value.top();
            stack_value.pop();
            first = stack_value.top();
            stack_value.pop();
            switch (operant_char)
            {
                case add:
                    stack_value.push(first + second);
                    break ;
                case substract:
                    stack_value.push(first - second);
                    break ;
                case mulitply:
                    stack_value.push(first * second);
                    break ;
                case divide:
                    stack_value.push(first / second);
                    break ;
            }
        }
        i++;
    }
    return true;
}

// [**** Destructor ****]
RPN::~RPN()
{}