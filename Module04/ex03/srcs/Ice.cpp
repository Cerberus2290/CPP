/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:02:39 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 15:47:48 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Ice.hpp"

// [**** Constructors ****]

Ice::Ice() : AMateria("ice")
{
    _type = "ice";
    std::cout << "Ice has been created. --> default constructor" << std::endl;
}

Ice::Ice(const Ice &ice) : AMateria("ice")
{
    *this = ice;
    std::cout << "Ice has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

Ice& Ice::operator=(Ice const &ice)
{
    _type = ice.getType();
    std::cout << "Ice has been created. --> copy assignment constructor" << std::endl;
    return *this;
}

// [**** Member Functions ****]

Ice* Ice::clone() const
{
    Ice *newIce = new   Ice();
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