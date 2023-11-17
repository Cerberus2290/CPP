/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:24:40 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 10:29:21 by tstrassb         ###   ########.fr       */
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
    _type = animal.getType();
    std::cout << "Animal has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operator ****]

Animal& Animal::operator=(const Animal &animal)
{
    _type = animal.getType();
    std::cout << "Animal has been created. --> copy assignment constructor" << std::endl;
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

void    Animal::setType(std::string input)
{
    _type = input;
}

// [**** Destructor ****]

Animal::~Animal()
{
    std::cout << "Animal has been destroyed. --> deconstructor" << std::endl;
}