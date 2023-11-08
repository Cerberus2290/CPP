/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:11:21 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/02 13:31:18 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed   a;
    Fixed   const b( Fixed( 5.05f ) * Fixed ( 2 ) );
    Fixed   c(10);
    Fixed   d(2.5f);
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << c / d << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << (a < c) << std::endl;

    return 0;
}