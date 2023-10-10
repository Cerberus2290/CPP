/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:02:39 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/10 13:23:28 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Ice.hpp"

// [**** Constructors ****]

Ice::Ice() : AMateria()
{
    _type = "ice";
    std::cout << "Ice has been created. --> default constructor" << std::endl;
}

Ice::Ice(const Ice &ice) : AMateria(ice)
{
    *this = ice;
    std::cout << "Ice has been created. --> copy constructor" << std::endl;
}

Ice::Ice(std::string const &type) : AMateria(type)
{
    _type = type;
    std::cout << "Ice has been created. --> string constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

Ice& Ice::operator=(Ice const &ice)
{
    this->_type = ice._type;
    return *this;
}

// [**** Getter Functions ****]

std::string const &Ice::getType() const
{
    return _type;
}

// [**** Member Functions ****]

Ice* Ice::clone() const
{
    Ice *newIce = new   Ice(*this);
    return newIce;
}

void    Ice::use(ICharacter &target)
{
    std::cout << "[ casts the ice spell at " << target.getName() << " ]" << std::endl;
}

// [**** Destructor ****]

Ice::~Ice()
{
    std::cout << "Ice has been destroyed. --> deconstructor" << std::endl;
}