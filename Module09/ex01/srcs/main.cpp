/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 07:12:57 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/28 07:21:31 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Syntax Error: Usage: ./RPN [equation]" << std::endl;
        return 1;
    }
    RPN::parameter = argv[1];
    RPN::wordCount(RPN::parameter);
    std::string array[RPN::count];
    if (RPN::fillCheckString(array) == false)
    {
        std::cerr << "Error main: Token must be digit and/or [+ - * /]" << std::endl;
        return 1;
    }
    if (RPN::handlePolish(array) == true)
    {
        if (RPN::stack_value.size() == 1 && RPN::operant.size() == 0)
            std::cout << RPN::stack_value.top() << std::endl;
        else
            std::cout << "Error main: input invalid - not enough operations" << std::endl;
    }
    else
    {
        std::cout << "Error main: input invalid - not enough digits" << std::endl;
        return 1;
    }
    return 0;
}