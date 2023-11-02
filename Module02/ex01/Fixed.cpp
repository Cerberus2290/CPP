/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:36:15 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/02 13:15:04 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

//[**** Constructors ****]
// Default Constructor
Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _rawBits = 0;
}

// Destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// Copy Constructor
Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

// Assignment Operator
Fixed &Fixed::operator=( Fixed const &fixed )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->_rawBits = fixed.getRawBits();
    return *this;
}

// Integer Constructor
Fixed::Fixed(const int raw)
{
    std::cout << "Int constructor called" << std::endl;
    _rawBits = raw << _fractionalBits;
}

// Float Constructor
Fixed::Fixed(const float raw)
{
    std::cout << "Float constructor called" << std::endl;
    _rawBits = roundf(raw * (1 << _fractionalBits));
}

//[**** Member Functions ****]
//[* Overload Operators *]
std::ostream & operator<<(std::ostream &o, const Fixed &f)
{
    o << f.toFloat();
    return o;
}

//[* Getter Functions *]
int     Fixed::toInt() const
{
    return ( _rawBits >> _fractionalBits);
}

float   Fixed::toFloat() const
{
    return ((float)_rawBits / (1 << _fractionalBits));
}

int     Fixed::getRawBits() const
{
    return (this->_rawBits);
}

//[* Setter Functions *]
void    Fixed::setRawBits( int const raw )
{
    this->_rawBits = raw;
}