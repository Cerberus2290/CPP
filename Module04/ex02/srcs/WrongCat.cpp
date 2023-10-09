/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:14:37 by tstrassb          #+#    #+#             */
/*   Updated: 2023/10/06 09:36:18 by tstrassb         ###   ########.fr       */
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
    *this = wrongcat;
    std::cout << "WrongCat has been created. --> copy constructor" << std::endl;
}

// [**** Overload Assignment Operators ****]

WrongCat&   WrongCat::operator=(const WrongCat &wrongcat)
{
    _type = wrongcat._type;
    return *this;
}

// [**** Destructor ****]

WrongCat::~WrongCat()
{
    std::cout << "WrongCat has been destroyed. --> deconstructor" << std::endl;
}