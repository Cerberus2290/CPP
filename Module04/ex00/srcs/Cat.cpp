/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:12:34 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 10:29:50 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Cat.hpp"

// [**** Constructors ****]

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat has been created. --> default constructor" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal()
{
    _type = cat.getType();
    std::cout << "Cat has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

Cat&    Cat::operator=(const Cat &cat)
{
    _type = cat.getType();
    std::cout << "Cat has been created. --> copy assignment constructor" << std::endl;
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