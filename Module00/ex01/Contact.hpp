#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class _contact
{
    public:
        _contact();
        _contact(int id, std::string firstname, std::string lastname, std::string secretid);

        int get_id();
        std::string get_firstname();
        std::string get_lastname();
        std::string get_secretid();
        std::string get_phone();
        std::string get_networth();

        void    set_id(int id);
        void    
}