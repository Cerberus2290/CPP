/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 08:16:45 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/02 13:21:05 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        //[* Contructors *]
        Fixed();
        Fixed( const int );
        Fixed( const float );
        Fixed( Fixed const & );
        ~Fixed();
        
        //[* Assignment Operators *]
        Fixed &operator=( Fixed const & );

        //[* Bool Operators *]
        bool    operator>(const Fixed &) const;
        bool    operator<(const Fixed &) const;
        bool    operator>=(const Fixed &) const;
        bool    operator<=(const Fixed &) const;
        bool    operator==(const Fixed &) const;
        bool    operator!=(const Fixed &) const;

        //[* Arithmetic Operators *]
        Fixed   operator+(const Fixed &) const;
        Fixed   operator-(const Fixed &) const;
        Fixed   operator*(const Fixed &) const;
        Fixed   operator/(const Fixed &) const;

        //[** Increment / Decrement Operators **]
        //[* Prefix *]
        Fixed   &operator++(void);
        Fixed   &operator--(void);

        //[* Postfix *]
        Fixed   operator++(int);
        Fixed   operator--(int);

        //[* Min / Max *]
        static Fixed        &min( Fixed &, Fixed & );
        static Fixed        &max( Fixed &, Fixed & );
        static Fixed const  &min( Fixed const &,  Fixed const & );
        static Fixed const  &max( Fixed const &,  Fixed const & );

        //[* Getter Function *]
        int getRawBits( void ) const;

        //[* Setter Functions *]
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;

    private:
        int                 _rawBits;
        static const int    _fractionalBits = 8;
};

std::ostream & operator<<(std::ostream &o, const Fixed &f);

#endif