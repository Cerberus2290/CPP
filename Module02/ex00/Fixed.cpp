/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:06:36 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/12 11:17:45 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _nb(0)
{
    if (PRINT_DEBUG)
        std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
    *this = fixed;
    if (PRINT_DEBUG)
        std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    if (PRINT_DEBUG)
        std::cout << "Deconstructor called" << std::endl;
}

Fixed&  Fixed::operator=(Fixed const &fixed)
{
    if (PRINT_DEBUG)
        std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->_nb = fixed._nb;
    return *this;
}

int Fixed::getRawBits() const
{
    if (PRINT_DEBUG)
        std::cout << "getRawBits member function called" << std::endl;
    return _nb;
}

void    Fixed::setRawBits(int const raw)
{
    if (PRINT_DEBUG)
        std::cout << "setRawBits member function called" << std::endl;
    this->_nb = raw;
}