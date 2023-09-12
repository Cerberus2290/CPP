/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:02:17 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/12 11:09:00 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <cstdlib>
#include <iostream>

# ifndef PRINT_DEBUG
#  define PRINT_DEBUG true
# endif

class Fixed
{
    public:
        Fixed();
        Fixed(Fixed const &fixed);
        ~Fixed();
        Fixed& operator=(Fixed const &fixed);
        int getRawBits() const;
        void    setRawBits(int const raw);
    
    private:
        static const    size_t _fractPartSize = 8;
        int _nb;
};

#endif