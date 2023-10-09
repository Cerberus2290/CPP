/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:12:34 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/09 14:58:12 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Cat.hpp"

// [**** Constructors ****]

Cat::Cat()
{
    _type = "Cat";
    _brain = new Brain;
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
    if (_brain)
        delete _brain;
    _brain = new Brain(*(cat._brain));
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
    delete _brain;
    std::cout << "Cat has been destroyed --> deconstructor" << std::endl;
}