/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:17:06 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/10 11:17:54 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/AMateria.hpp"

// [**** Constructors ****]

AMateria::AMateria() : _type("Unknown")
{
    std::cout << "AMateria has been created. --> default constructor" << std::endl;
}

AMateria::AMateria(const AMateria & amateria)
{
    *this = amateria;
    std::cout << "Amateria has been created. --> copy constructor" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "Amateria has been created. --> string constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

AMateria& AMateria::operator=(AMateria const &amateria)
{
    this->_type = amateria._type;
    return *this;
}

// [**** Getter Functions ****]

std::string const &AMateria::getType() const
{
    return _type;
}

// [**** Member Functions ****]

void    AMateria::use(ICharacter &target)
{
    (void)target;
}

// [**** Destructor ****]

AMateria::~AMateria()
{
    std::cout << "AMateria has been destroyed. --> deconstructor" << std::endl;
}