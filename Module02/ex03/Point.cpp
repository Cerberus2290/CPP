/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 07:47:31 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/29 09:31:48 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{ }

Point::Point(float const &x, float const &y) : _x(x), _y(y)
{ }

Point::Point(Point const &p) : _x(p.getX()), _y(p.getY())
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
    (void)p;
    return *this;
}

Fixed   Point::getX() const
{
    return (this->_x);
}

Fixed   Point::getY() const
{
    return (this->_y);
}