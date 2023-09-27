/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:36:15 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/27 06:45:30 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

//[**** Constructors ****]
// Default Constructor
Fixed::Fixed() : _rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// Destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// Copy Constructor
Fixed::Fixed(const Fixed &f) : _rawBits(f.getRawBits())
{
    std::cout << "Copy constructor called" << std::endl;
}

// Assignment Operator
Fixed & Fixed::operator=(const Fixed &f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &f)
        _rawBits = f.getRawBits();
    return *this;
}

// Integer Constructor
Fixed::Fixed(const int raw) : _rawBits(raw << _fractionalBits)
{
    std::cout << "Int constructor called" << std::endl;
}

// Float Constructor
Fixed::Fixed(const float raw) : _rawBits(roundf(raw * (1 << _fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

//[**** Member Functions ****]
//[* Overload Operators *]
std::ostream & operator<<(std::ostream &o, const Fixed &f)
{
    o << f.toFloat();
    return o;
}

//[* Getter Functions *]
int Fixed::toInt() const
{
    return (getRawBits() >> _fractionalBits);
}

float   Fixed::toFloat() const
{
    return ((float)getRawBits() / (1 << _fractionalBits));
}

int Fixed::getRawBits() const
{
    return (this->_rawBits);
}

//[* Setter Functions *]
void    Fixed::setRawBits( int const raw )
{
    this->_rawBits = raw;
}