#include "Shape.h"

Shape::Shape(std::string shape_name)
{
    Name = shape_name;
}

double Shape::get_area()
{
    Area = 0;
    return Area;
}

std::string Shape::get_name()
{
    return Name;
}

