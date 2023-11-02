/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 07:47:31 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/02 13:58:38 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{ }

Point::Point(float const &x, float const &y) : _x(x), _y(y)
{ }

Point::Point(Point const &p) : _x(p._x), _y(p._y)
{ }

Point::~Point()
{ }

std::ostream & operator<<(std::ostream &o, const Point &p)
{
    o << "(x:" << p.getX() << ", y:" << p.getY() << ")";
    return o;
}

Point & Point::operator=(Point const & p)
{
    (Fixed)_x = p._x;
    (Fixed)_y = p._y;
    return *this;
}

Fixed const  Point::getX() const
{
    return (_x);
}

Fixed const  Point::getY() const
{
    return (_y);
}