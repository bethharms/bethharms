#include "Rectangle.h"

Rectangle::Rectangle(int h, int l) : Shape("name")
{
    height = h;
    length = l;
}

double Rectangle::get_area()
{
    Area = height * length;
    return Area;
}

int Rectangle::get_perimeter()
{
    Perimeter = 2 * length + 2 * height;
    return Perimeter;
}

