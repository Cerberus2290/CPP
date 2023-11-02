#ifndef BSP_HPP
# define BSP_HPP

#include "Point.hpp"

Fixed   calculateArea(Point a, Point b, Point c);
bool    bsp( Point const a, Point const b, Point const c, Point const point);

#endif