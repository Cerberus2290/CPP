/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:24:40 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/06 09:35:23 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Animal.hpp"

// [**** Constructors ****]

Animal::Animal() : _type("Unknown")
{
    std::cout << "Animal has been created. --> default constructor" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    *this = animal;
    std::cout << "Animal has been created. --> string constructor" << std::endl;
}

// [**** Overload Assignment Operator ****]

Animal& Animal::operator=(const Animal &animal)
{
    _type = animal._type;
    return *this;
}

// [**** Member Function ****]

void    Animal::makeSound() const
{
    std::cout << "Fuck!" << std::endl;
}

// [**** Getter Function ****]

std::string Animal::getType() const
{
    return _type;
}

// [**** Destructor ****]

Animal::~Animal()
{
    std::cout << "Animal has been destroyed. --> deconstructor" << std::endl;
}