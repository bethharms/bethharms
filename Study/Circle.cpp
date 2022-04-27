#include "Circle.h"

Circle::Circle(int D, std::string shape_name):Shape(shape_name)
{
    Diameter = D;
    Name = shape_name;
}

double Circle::get_area()
{
    Area = (3.1415926 * (1/2 * Diameter)*1/2*Diameter );
    return Area;
}

int Circle::get_perimeter()
{
    Perimeter = 3.1415926 * Diameter;

    return Perimeter;
}