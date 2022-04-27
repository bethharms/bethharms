#pragma once

#include "Shape.h"

class Triangle : public Shape
{
    public:

    Triangle(int, int, int, double);
    int get_perimeter();
    double get_area();

    private:

    int base;
    int side1;
    int side2;
    double height;
    int valid_check;

};