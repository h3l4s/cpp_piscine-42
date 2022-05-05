#ifndef POINT_H
# define POINT_H

# include <iostream>
# include <tgmath.h>
#include "Fixed.hpp"

class Point{
	public:

		Point(void);
		Point(Point const & src);
		Point(Fixed const w, Fixed const z);
		~Point(void);
		Point & operator=(Point const & src);
		Fixed getX(void)const;
		Fixed getY(void)const;
	private:

		Fixed const _x;
		Fixed const _y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif //POINT_H