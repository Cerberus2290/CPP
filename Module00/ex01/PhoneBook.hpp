/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:48:15 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/05 06:25:29 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

#define LINE "---------------------------------------------"

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        void    add_contact();
        void    search_contact();

    private:
        std::string getstream(std::string   prompt);
        std::string overwriteContact();

        void    print_stuff(std::string stream);
        void    print_details(int   index);

        int last_contact;
        int total_id;
        _contact    *contact_list;
};

int num_array(std::string str);
int ft_stoi(const std::string &str);

#endif