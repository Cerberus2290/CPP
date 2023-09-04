#include "Contact.hpp"

_contact::_contact(int id, std::string firstname, std::string lastname, std::string secretid)
{
    this->id = id;
    this->firstname = firstname;
    this->lastname = lastname;
    this->secretid = secretid;
}

_contact::_contact()
{
    this->id = 0;
    this->firstname = "";
    this->lastname = "";
    this->secretid = "";
}

int _contact::get_id()
{
    return  this->id;
}

std::string _contact::get_firstname()
{
    return  this->firstname;
}

std::string _contact::get_lastname()
{
    return  this->lastname;
}

std::string _contact::get_secretid()
{
    return  this->secretid;
}

std::string _contact::get_phone()
{
    return  this->phone;
}

std::string _contact::get_networth()
{
    return  this->networth;
}

void    _contact::set_id(int id)
{
    this->id = id;
}

void    _contact::set_firstname(std::string stream)
{
    this->firstname = stream;
}

void    _contact::set_lastname(std::string stream)
{
    this->lastname = stream;
}

void    _contact::set_secretid(std::string stream)
{
    this->secretid = stream;
}

void    _contact::set_phone(std::string stream)
{
    this->phone = stream;
}

void    _contact::set_networth(std::string stream)
{
    this->networth = stream;
}