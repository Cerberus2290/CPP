/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 08:44:59 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/28 11:11:04 by tstrassb         ###   ########.fr       */
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

// Copy constructor
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

// Float Contructor
Fixed::Fixed(const float raw) : _rawBits(roundf(raw * (1 << _fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
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
    this->_rawBits++;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed temp(*this);
    operator++();
    return temp;
}

Fixed   &Fixed::operator--()
{
    this->_rawBits--;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed temp(*this);
    operator--();
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

//[**** Setter Functions ****]
void    Fixed::setRawBits( int const raw )
{
    this->_rawBits = raw;
}

//[**** Overload Operators ****]
std::ostream & operator<<(std::ostream &o, const Fixed &f)
{
    o << f.toFloat();
    return o;
}