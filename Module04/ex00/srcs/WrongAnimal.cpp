/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 08:46:18 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/08 10:05:33 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/WrongAnimal.hpp"

// [**** Constructors ****]

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal has been created. --> default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
    _type = wronganimal.getType();
    std::cout << "WrongAnimal has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

WrongAnimal&    WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
    _type = wronganimal.getType();
    std::cout << "WrongAnimal has been created. --> copy assignment constructor" << std::endl;
    return *this;
}

// [**** Member Functions ****]

void    WrongAnimal::makeSound() const
{
    std::cout << "Fuck!" << std::endl;
}

// [**** Getter Function ****]

std::string WrongAnimal::getType() const
{
    return _type;
}

// [**** Destructor ****]

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal has been destroyed. --> deconstructor" << std::endl;
}