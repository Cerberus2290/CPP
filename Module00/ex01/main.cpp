/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:15:26 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/04 18:21:15 by tstrassb         ###   ########.fr       */
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
    PhoneBook   phone_list;

    std::string input;
    while (1)
    {
        main_menu();
        std::cin >> input;
        std::cout << LINE << std::endl;
        if (!num_array(input))
        {
            std::cout << "Enter menu option [1-3]" << std::endl << LINE << std::endl;
            continue ;
        }
        switch  (stoi(input))
        {
            case 1:
                phone_list.add_contact();
                break ;
            case 2:
                phone_list.search_contact();
                break ;
            case 3:
                std::cout << "Exiting Phonebook" << std::endl << LINE << std::endl;
                return 0;
            default:
                std::cout << "Input incorrect! Enter a valid menu number [1-3]" << std::endl;
                break ;
        }
    }
}