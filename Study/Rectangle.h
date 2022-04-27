#pragma once

#include "Shape.h"

class Rectangle : public Shape
{
    public:

    Rectangle(int, int);
    int get_perimeter();
    double get_area();
    
    private:
    
    int height;
    int length;

};