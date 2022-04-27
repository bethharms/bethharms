#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape
{
    public:

    Circle(int D, std::string shape_name);
    double get_area();
    virtual int get_perimeter();

    int Diameter;

};
#endif