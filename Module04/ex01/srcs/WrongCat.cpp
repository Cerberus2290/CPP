/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:14:37 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 13:19:55 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/WrongCat.hpp"

// [**** Constructors ****]

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "WrongCat has been created. --> default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat) : WrongAnimal(wrongcat)
{
    _type = wrongcat.getType();
    std::cout << "WrongCat has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

WrongCat&   WrongCat::operator=(const WrongCat &wrongcat)
{
    _type = wrongcat.getType();
    std::cout << "WrongCat has been created. --> copy assignment constructor" << std::endl;
    return *this;
}

// [**** Member Functions ****]

void    WrongCat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

// [**** Destructor ****]

WrongCat::~WrongCat()
{
    std::cout << "WrongCat has been destroyed. --> deconstructor" << std::endl;
}