/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:49:48 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/08 13:01:27 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR  =   &str;
    std::string&    stringREF   =   str;

    std::cout << "STR - address       : " << &str << std::endl;
    std::cout << "stringPTR - address : " << &stringPTR << std::endl;
    std::cout << "stringREF - address : " << &stringREF << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "STR - value         : " << str << std::endl;
    std::cout << "stringPTR - value   : " << *stringPTR << std::endl;
    std::cout << "stringREF - value   : " << stringREF << std::endl;
}