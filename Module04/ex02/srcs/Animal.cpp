/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:24:40 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 13:04:11 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Animal.hpp"

// [**** Constructors ****]

Animal::Animal()
{
    std::cout << "Animal has been created. --> default constructor" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Animal has been created. --> copy constructor" << std::endl;
    _type = animal.getType();
}

// [**** Overload Assignment Operator ****]

Animal& Animal::operator=(const Animal &animal)
{
    _type = animal.getType();
    std::cout << "Animal has been created. --> copy constructor" << std::endl;
    return *this;
}

// [**** Member Function ****]

void    Animal::makeSound() const
{
    std::cout << "Fuck!" << std::endl;
}

// [**** Getter & Setter Functions ****]

std::string Animal::getType() const
{
    return _type;
}

void    Animal::setType(std::string type)
{
    _type = type;
}

// [**** Destructor ****]

Animal::~Animal()
{
    std::cout << "Animal has been destroyed. --> deconstructor" << std::endl;
}