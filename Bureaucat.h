#ifndef Bureaucat_H
#define Bureaucat_H

using namespace std;

#include <iostream>
#include <string>
#include "Computer.h"

class Bureaucat : public Computer
{
    public:

    Bureaucat(); // default constructor
    virtual void makeMove();  // causes move choice to be made
};
#endif 