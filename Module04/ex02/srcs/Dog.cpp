/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:28:35 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/09 14:59:43 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Dog.hpp"

// [**** Constructors ****]

Dog::Dog()
{
    _brain = new Brain();
    _type = "Dog";
    std::cout << "Dog has been created. --> default constructor" << std::endl;
}

Dog::Dog(const Dog & dog) : Animal(dog)
{
    *this = dog;
    std::cout << "Dog has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

Dog&    Dog::operator=(const Dog &dog)
{
    if (_brain)
        delete _brain;
    _brain = new Brain(*(dog._brain));
    _type = dog._type;
    return *this;
}

// [**** Member Functions ****]

void    Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}

// [**** Destructor ****]

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog has been destroyed. --> deconstructor" << std::endl;
}