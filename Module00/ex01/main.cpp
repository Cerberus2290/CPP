/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:15:26 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/06 06:27:54 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "PhoneBook.hpp"

void    main_menu()
{
    std::cout << "-MAIN MENU-\nEnter your choice [1-3]:" << std::endl;
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

int ft_stoi(const std::string &str)
{
    std::istringstream iss(str);
    int value;
    if (!(iss >> value))
        return 0;
    return value;
}

int main()
{
    PhoneBook   phone_list;

    std::string input;
    while (1)
    {
        main_menu();
        if (!(std::cin >> input))
        {
            if (std::cin.eof())
            {
                std::cout << "EOF (CRTL+D) dectected.\nExiting Phonebook" << std::endl;
                break ;
            }
            std::cerr << "Input error. Exiting Phonebook" << std::endl;
            break ;
        }
        std::cout << LINE << std::endl;
        int choice = ft_stoi(input);
        if (choice < 1 || choice > 3)
        {
            std::cout << "Enter menu option [1-3]" << std::endl << LINE << std::endl;
            continue ;
        }
        switch  (choice)
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
    return 0;
}