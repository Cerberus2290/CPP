/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:32:50 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 15:44:48 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Cure.hpp"

// [**** Constructors ****]

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure has been created. --> default constructor" << std::endl;
    _type = "cure";
}

Cure::Cure(const Cure &cure) : AMateria("cure")
{
    *this = cure;
    std::cout << "Cure has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

Cure& Cure::operator=(const Cure &cure)
{
    _type = cure.getType();
    std::cout << "Cure has been created. --> copy assignment constructor" << std::endl;
    return *this;
}

// [**** Member Functions ****]

Cure* Cure::clone() const
{
    Cure *newCure = new Cure();
    return newCure;
}

void    Cure::use(ICharacter &target)
{
    std::cout << "[ heals " << target.getName() << "'s wounds ]" << std::endl;
}

// [**** Destructor ****]

Cure::~Cure()
{
    std::cout << "Cure has been destroyed. --> deconstructor" << std::endl;
}