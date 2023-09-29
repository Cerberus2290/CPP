/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 09:42:24 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/29 09:45:03 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
    Point   a(3, 5);
    Point   b(1, 1);
    Point   c(5, 1);
    
    //false
    std::cout << "t" << bsp(a, b, c, Point(3, 3)) << std::endl;
    //true
    std::cout << "x" << bsp(a, b, c, Point(1, 3)) << std::endl;
    
    return 0;
}