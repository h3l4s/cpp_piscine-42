#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed checkAB;
    Fixed checkC;

    Fixed checkBC;
    Fixed checkA;

    Fixed checkCA;
    Fixed checkB;

    checkAB = (point.getX() - a.getX()) * (b.getY() - a.getY()) - (point.getY() - a.getY()) * (b.getX() - a.getX());
    checkC  = (c.getX() - a.getX()) * (b.getY() - a.getY()) - (c.getY() - a.getY()) * (b.getX() - a.getX());
    if ((checkAB < 0 && checkC > 0) ||(checkAB > 0 && checkC < 0))
        return false;
        
    checkBC = (point.getX() - b.getX()) * (c.getY() - b.getY()) - (point.getY() - b.getY()) * (c.getX() - b.getX());
    checkA = (a.getX() - b.getX()) * (c.getY() - b.getY()) - (a.getY() - b.getY()) * (c.getX() - b.getX());
    if ((checkBC < 0 && checkA > 0) ||(checkBC > 0 && checkA < 0))
        return false;
    
    checkCA = (point.getX() - c.getX()) * (a.getY() - c.getY()) - (point.getY() - c.getY()) * (a.getX() - c.getX());
    checkB  = (b.getX() - c.getX()) * (a.getY() - c.getY()) - (b.getY() - c.getY()) * (a.getX() - c.getX());
    if ((checkCA < 0 && checkB > 0) ||(checkCA > 0 && checkB < 0))
        return false;

    return (true);
} 