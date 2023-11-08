/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 09:33:21 by tstrassb          #+#    #+#             */
/*   Updated: 2023/11/02 13:54:07 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

Fixed   calculateArea(Point a, Point b, Point c)
{
    return ((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / Fixed(2.0f));
}

bool    bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed   area, area1, area2, area3;
    area = calculateArea(a, b, c);
    area1 = calculateArea(a, b, point);
    area2 = calculateArea(a, point, c);
    area3 = calculateArea(point, b, c);
    if (area < 0)
        area = area * -1;
    if (area1 < 0)
        area1 = area1 * -1;
    if (area2 < 0)
        area2 = area2 * -1;
    if (area3 < 0)
        area3 = area3 * -1;
    if (area == area1 + area2 + area3 && area1 != 0 && area2 != 0 && area3 != 0)
        return (1);
    return (0);
}