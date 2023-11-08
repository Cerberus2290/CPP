/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:28:35 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 13:15:08 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Dog.hpp"

// [**** Constructors ****]

Dog::Dog()
{
    _type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog has been created. --> default constructor" << std::endl;
}

Dog::Dog(const Dog & dog) : Animal(dog)
{
    _type = dog.getType();
    _brain = new Brain();
    *_brain = *(dog._brain);
    std::cout << "Dog has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

Dog&    Dog::operator=(const Dog &dog)
{
    _type = dog.getType();
    delete _brain;
    _brain = new Brain();
    *_brain = *(dog._brain);
    std::cout << "Dog has been created. --> copy assignment constructor" << std::endl;
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