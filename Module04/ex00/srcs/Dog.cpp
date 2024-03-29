/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:28:35 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 09:59:04 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Dog.hpp"

// [**** Constructors ****]

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Dog has been created. --> default constructor" << std::endl;
}

Dog::Dog(const Dog & dog) : Animal()
{
    _type = dog.getType();
    std::cout << "Dog has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

Dog&    Dog::operator=(const Dog &dog)
{
    _type = dog.getType();
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
    std::cout << "Dog has been destroyed. --> deconstructor" << std::endl;
}