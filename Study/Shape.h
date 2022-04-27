#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
    public:

    Shape(std::string shape_name);
    virtual double get_area();
    virtual int get_perimeter() = 0 ;
    std::string get_name();

    double Area;
    int Perimeter;
    std::string Name;

};
#endif