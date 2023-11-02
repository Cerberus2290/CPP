/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 07:42:06 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/02 13:44:53 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

//[**** Constructors ****]
// Default Constructor
Fixed::Fixed()
{
    //std::cout << "Default constructor called" << std::endl;
    _rawBits = 0;
}

// Destructor
Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &fixed)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

// Assignment Operator
Fixed & Fixed::operator=(const Fixed &fixed)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->_rawBits = fixed.getRawBits();
    return *this;
}

// Integer Constructor
Fixed::Fixed(const int raw)
{
    //std::cout << "Int constructor called" << std::endl;
    _rawBits = raw << _fractionalBits;
}

// Float Contructor
Fixed::Fixed(const float raw)
{
    //std::cout << "Float constructor called" << std::endl;
    _rawBits = roundf(raw * (1 << _fractionalBits));
}

//[**** Member Functions ****]
// Bool Operators
bool    Fixed::operator>(const Fixed &f) const
{
    return (this->_rawBits > f.getRawBits());
}

bool    Fixed::operator<(const Fixed &f) const
{
    return (this->_rawBits < f.getRawBits());
}

bool    Fixed::operator>=(const Fixed &f) const
{
    return (this->_rawBits >= f.getRawBits());
}

bool    Fixed::operator<=(const Fixed &f) const
{
    return (this->_rawBits <= f.getRawBits());
}

bool    Fixed::operator==(const Fixed &f) const
{
    return (this->_rawBits == f.getRawBits());
}

bool    Fixed::operator!=(const Fixed &f) const
{
    return (this->_rawBits != f.getRawBits());
}

// Arithmetic Operators
Fixed   Fixed::operator+(const Fixed &f) const
{
    return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed   Fixed::operator-(const Fixed &f) const
{
    return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed   Fixed::operator*(const Fixed &f) const
{
    return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed   Fixed::operator/(const Fixed &f) const
{
    return (Fixed(this->toFloat() / f.toFloat()));
}

// Increment / Decrement Operator
Fixed   &Fixed::operator++()
{
    _rawBits++;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed temp = *this;
    _rawBits++;
    return temp;
}

Fixed   &Fixed::operator--()
{
    _rawBits--;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed temp = *this;
    _rawBits--;
    return temp;
}

// Min / Max
Fixed   &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

Fixed   &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}

//[**** Getter Functions ****]
int Fixed::toInt() const
{
    return ( _rawBits >> _fractionalBits);
}

float   Fixed::toFloat() const
{
    return ((float)_rawBits / (1 << _fractionalBits));
}

int Fixed::getRawBits() const
{
    return (this->_rawBits);
}

//[**** Setter Functions ****]
void    Fixed::setRawBits( int const raw )
{
    this->_rawBits = raw;
}

//[**** Overload Operators ****]
std::ostream &operator<<(std::ostream &o, const Fixed &f)
{
    o << f.toFloat();
    return o;
}