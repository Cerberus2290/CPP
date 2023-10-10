/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:32:50 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/10 11:41:58 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// [**** Constructors ****]

Cure::Cure() : AMateria()
{
    _type = "cure";
    std::cout << "Cure has been created. --> default constructor" << std::endl;
}

Cure::Cure(const Cure &cure) : AMateria(cure)
{
    *this = cure;
    std::cout << "Cure has been created. --> copy constructor" << std::endl;
}

Cure::Cure(std::string const &type) : AMateria(type)
{
    _type = type;
    std::cout << "Cure has been created. --> string constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

Cure& Cure::operator=(Cure const &cure)
{
    this->_type = cure._type;
    return *this;
}

// [**** Getter Functions ****]

std::string const &Cure::getType() const
{
    return _type;
}

// [**** Member Functions ****]

Cure* Cure::clone() const
{
    Cure *newCure = new Cure(*this);
    return newCure;
}

void    Cure::use(ICharacter &target)
{
    std::cout << "[ heals " << target.getName() << "'s wounds]" << std::endl;
}

// [**** Destructor ****]

Cure::~Cure()
{
    std::cout << "Cure has been destroyed. --> deconstructor" << std::endl;
}