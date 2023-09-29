/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 09:33:21 by tstrassb          #+#    #+#             */
/*   Updated: 2023/09/29 09:42:12 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool    bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed   x1 = a.getX();
    Fixed   y1 = a.getY();
    Fixed   x2 = b.getX();
    Fixed   y2 = b.getY();
    Fixed   x3 = c.getX();
    Fixed   y3 = c.getY();
    Fixed   x = point.getX();
    Fixed   y = point.getY();

    Fixed   d1 = (x - x1) * (y2 - y1) - (x2 - x1) * (y - y1);
    Fixed   d2 = (x - x2) * (y3 - y2) - (x3 - x2) * (y - y2);
    Fixed   d3 = (x - x3) * (y1 - y3) - (x1 - x3) * (y - y3);

    if (d1 >= 0 && d2 >= 0 && d3 >= 0)
        return true;
    else if (d1 <= 0 && d2 <= 0 && d3 <= 0)
        return true;
    else
        return false;
}