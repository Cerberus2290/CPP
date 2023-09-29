/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 07:35:52 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/29 07:36:06 by tstrassb         ###   ########.fr       */
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
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed &);
        ~Fixed();
        
        //[* Assignment Operators *]
        Fixed & operator=(const Fixed &);

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
        static Fixed        &min(Fixed &, Fixed &);
        static const Fixed  &min(const Fixed &, const Fixed &);
        static Fixed        &max(Fixed &, Fixed &);
        static const Fixed  &max(const Fixed &, const Fixed &);

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