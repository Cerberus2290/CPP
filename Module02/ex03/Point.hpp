/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 07:36:21 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/29 07:41:16 by tstrassb         ###   ########.fr       */
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
        Point & operator=(Point const &);
        ~Point();

        Fixed   getX() const;
        Fixed   getY() const;
    
    private:
        Fixed   const _x;
        Fixed   const _y;
};

std::ostream & operator<<(std::ostream &, const Point &);
bool    bsp( Point const a, Point const b, Point const c, Point const point);

#endif