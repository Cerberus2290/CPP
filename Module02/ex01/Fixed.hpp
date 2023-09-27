/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:25:59 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/26 09:35:25 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class   Fixed
{
    public:
        Fixed();
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed &f);
        ~Fixed();
        Fixed & operator=(const Fixed &f);
        
        int getRawBits( void ) const;
        void    setRawBits( int const raw );
        
        float   toFloat( void ) const;
        int toInt( void ) const;
    
    private:
        int _rawBits;
        static const int    _fractionalBits = 8;
};

std::ostream & operator<<(std::ostream &o, const Fixed &f);

#endif