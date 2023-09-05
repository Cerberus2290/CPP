#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class _contact
{
    public:
        _contact();
        _contact(int id, std::string firstname, std::string lastname, std::string secretid);

        int get_id() const;
        std::string get_firstname() const;
        std::string get_lastname() const;
        std::string get_secretid() const;
        std::string get_phone() const;
        std::string get_networth() const;

        void    set_id(int id);
        void    set_firstname(std::string stream);
        void    set_lastname(std::string stream);
        void    set_secretid(std::string stream);
        void    set_phone(std::string stream);
        void    set_networth(std::string stream);
    
    private:
        int id;
        std::string firstname;
        std::string lastname;
        std::string secretid;
        std::string phone;
        std::string networth; 
};

#endif