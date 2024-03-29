/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:48:08 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/05 07:03:38 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>

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
    std::cout << "Continue ?\n" << "Enter [1] : \"No, do not overwrite\"" << std::endl;
    std::cout << "Enter [0] : \"Yes, overwrite contact\"\nSelection: ";
    std::string selection;
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
        std::cout << "Adding new contact:" << std::endl;
    else
    {
        if (overwriteContact() == "1")
        {
            std::cout << "Return to main menu." << std::endl;
            std::cout << LINE << std::endl;
            return ;
        }
    }
    this->contact_list[this->last_contact].set_id(++(this->total_id));
    this->contact_list[this->last_contact].set_firstname(getstream("First name: "));
    this->contact_list[this->last_contact].set_lastname(getstream("Last name: "));
    this->contact_list[this->last_contact].set_secretid(getstream("Secret identity: "));
    this->contact_list[this->last_contact].set_phone(getstream("Phone number: "));
    this->contact_list[this->last_contact].set_networth(getstream("Net worth: "));
    std::cout << "New Contact added to phone book." << std::endl;
    std::cout << LINE << std::endl;
    std::cout << "Return to main menu." << std::endl;
    if (++(this->last_contact) >= 2)
        this->last_contact = 0;
    std::cout << LINE << std::endl;
}

void    PhoneBook::print_stuff(std::string  stream)
{
    if (stream.length() <= 10)
    {
        int space = 10 - stream.length();
        for (; space > 0; space--)
            std::cout << " ";
        std::cout << stream;
    }
    else
    {
        for (int i = 0; i < 9; i++)
        {
            std::cout << stream[i];
        }
        std::cout << ".";
    }
}

void    PhoneBook::print_details(int index)
{
    for (int i = 0; i < 8; i++)
    {
        if (contact_list[i].get_id() == index)
        {
            std::cout << contact_list[i].get_id() << "(index) is firstname: ";
            std::cout << contact_list[i].get_firstname() << ", lastname: ";
            std::cout << contact_list[i].get_lastname() << ", Secret ID: ";
            std::cout << contact_list[i].get_secretid() << ", Phone Number: ";
            std::cout << contact_list[i].get_phone() << ", Networth: ";
            std::cout << contact_list[i].get_networth() << std::endl;
        }
    }
}

std::string ft_itos(int value)
{
    std::stringstream   sstream;
    sstream << value;
    return sstream.str();
}

void    PhoneBook::search_contact()
{
    std::string list_index;

    std::cout << "|     index|first name| last name| Secret ID|" << std::endl;
    std::cout << LINE << std::endl;
    for (int i = 0; i < 8; i++)
    {
        if (contact_list[i].get_id() == 0)
            break ;
        std::cout << "|";
        print_stuff(ft_itos(contact_list[i].get_id()));
        std::cout << "|";
        print_stuff(contact_list[i].get_firstname());
        std::cout << "|";
        print_stuff(contact_list[i].get_lastname());
        std::cout << "|";
        print_stuff(contact_list[i].get_secretid());
        std::cout << "|";
        std::cout << std::endl;
    }
    std::cout << "Enter index number for more detail.\nOtherwise will return to main menu. ";
    std::cin >> list_index;
    int int_list_index = ft_stoi(list_index);
    if (!num_array(list_index))
    {
        std::cout << "Enter index number [1-8]" << std::endl;
        std::cout << LINE << std::endl;
    }
    else
        print_details(int_list_index);
    std::cout << "Returning to main menu" << std::endl;
    std::cout << LINE << std::endl;
}