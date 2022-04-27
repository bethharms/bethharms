#include "Triangle.h"

Triangle::Triangle(int b, int s1, int s2, double h) : Shape("name")
{
    base = b;
    side1 = s1;
    side2 = s2;
    height = h;

    if (base+side1 > side2 && base+side2 > side1 && side1+side2 > base)
    {
        valid_check = 0;
        if (base == side1 == side2)
    {
        Name = "Equilateral";
    }

    else if (base == side1 || base == side2 || side1 == side2)
    {
        Name = "Isosceles";
    }

    else
    {
        Name = "Scalene";
    }

    }
    else
    {
        valid_check = 1;
        Name = "Invalid";
    }


}

double Triangle::get_area()
{
    if (valid_check == 0)
    {
        Area = base * height / 2;
        return Area;
    }
    else
    {
        return 0.0;
    }
}

int Triangle::get_perimeter()
{
    Perimeter = side1 + side2 + base;
    return Perimeter;
}