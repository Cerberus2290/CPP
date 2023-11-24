/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:09:50 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/24 12:47:22 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MutantStack.hpp"

int main()
{
    MutantStack<std::string> ms_string;
    ms_string.push("Five");
    ms_string.push("Thirty Three");
    ms_string.pop();
    ms_string.push("Seven");
    ms_string.push("Fourtytwo");

    MutantStack<int> ms_int;
    ms_int.push(5);
    ms_int.push(33);
    ms_int.pop();
    ms_int.push(7);
    ms_int.push(42);
    
    std::cout << std::endl;

    MutantStack<std::string>::ito bito = ms_string.begin();
    MutantStack<std::string>::ito eito = ms_string.end();
    ++bito;
    --bito;
    std::cout << "String Iterator: ";
    while (bito != eito)
    {
        std::cout << *bito << ", ";
        ++bito;
    }
    std::cout << std::endl << std::endl << "String Stack Info \nSize: " << ms_string.size() << "\nEmpty: " << (ms_string.empty() ? "true" : "false") << std::endl;
    ms_string.pop();
    ms_string.pop();
    ms_string.pop();
    std::cout << std::endl << std::endl << "String Stack Info \nSize: " << ms_string.size() << "\nEmpty: " << (ms_string.empty() ? "true" : "false") << std::endl;

    std::cout << std::endl << std::endl << "****************************************" << std::endl << std::endl;

    MutantStack<int>::ito bito_i = ms_int.begin();
    MutantStack<int>::ito eito_i = ms_int.end();
    ++bito_i;
    --bito_i;
    std::cout << "Int Iterator: ";
    while (bito_i != eito_i)
    {
        std::cout << *bito_i << ", ";
        ++bito_i;
    }
    std::cout << std::endl << std::endl << "Integer Stack Info \nSize: " << ms_int.size() << "\nEmpty: " << (ms_int.empty() ? "true" : "false") << std::endl;

    return 0;
}