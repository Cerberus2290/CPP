/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:15:26 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/01 08:47:20 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void    main_menu()
{
    std::cout << "Follow the steps in order [1-3]:" << std::endl;
    std::cout << "1 : ADD contact" << std::endl;
    std::cout << "2 : SEARCH contact" << std::endl;
    std::cout << "3 : EXIT program" << std::endl;
    std::cout << "Enter your choice: ";
}

int num_array(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            return 0;
    }
    return 1;
}

int main()
{
    while (1)
    {
        main_menu();
    }
}