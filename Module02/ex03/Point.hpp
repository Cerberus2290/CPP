/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 07:36:21 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/02 13:57:21 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <cmath>

class Point
{
    public:
        Point();
        Point(float const &, float const &);
        Point(Point const &);
        ~Point();
        Point & operator=(Point const &);

        Fixed const  getX() const;
        Fixed const  getY() const;
    
    private:
        Fixed   const _x;
        Fixed   const _y;
};

std::ostream & operator<<(std::ostream &, const Point &);

#endif