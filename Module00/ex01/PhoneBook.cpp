/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:48:08 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/01 10:07:47 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
    this->contact_list = new _contact[8];
    this->last_contact = 0;
    this->total_id = 0;
}

PhoneBook::~PhoneBook()
{
    delete[] this->contact_list;
}

std::string PhoneBook::overwriteContact()
{
    std::cout << "You are overwriting: ";
    std::cout << this->contact_list[this->last_contact].get_firstname() << " ";
    std::cout << this->contact_list[this->last_contact].get_lastname() << std::endl;
    std::cout << "Continue ?\n" << "Enter [N] : No, do not overwrite" << std::endl;
    std::cout << "Enter [Y] : Yes, overwrite contact\nSelection: ";
    std::string selection:
    std::cin >> selection;
    std::cout << LINE << std::endl;
    return selection;
}

std::string PhoneBook::getstream(std::string prompt)
{
    std::string input;
    
    std::cout << prompt;
    std::cin >> input;
    while (input == "")
    {
        std::cout << "Field cannot be empty!" << std::endl;
        std::cout << prompt;
        std::cin >> input;
    }
    return input;
}

void    PhoneBook::add_contact()
{
    if (this->contact_list[this->last_contact].get_firstname() == "")
        std::cout << "Contact is being added." << std::endl;
    else
    {
        if (overwriteContact() == "0")
            return ;
    }
    this->contact_list[this->last_contact].set_id(++(this->total_id));
    this->contact_list[this->last_contact].set_firstname(getstream("First name: "));
    this->contact_list[this->last_contact].set_lastname(getstream("Last name: "));
    this->contact_list[this->last_contact].set_secretid(getstream("Secret identity: "));
    this->contact_list[this->last_contact].set_phone(getstream("Phone number: "));
    this->contact_list[this->last_contact].set_networth(getstream("Net worth: "));
    std::cout << "New Contact added to phone book. Return to main menu." << std::endl;
    if (++(this->last_contact) >= 8)
        this->last_contact = 0;
    std::cout << LINE << std:endl;
}


