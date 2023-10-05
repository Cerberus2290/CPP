/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:12:34 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/05 15:26:51 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/Cat.hpp"

// [**** Constructors ****]

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat has been created. --> default constructor" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
    *this = cat;
    std::cout << "Cat has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

Cat&    Cat::operator=(const Cat &cat)
{
    _type = cat._type;
    return *this;
}

// [**** Member Functions ****]

void    Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

// [**** Destructor ****]

Cat::~Cat()
{
    std::cout << "Cat has been destroyed --> deconstructor" << std::endl;
}