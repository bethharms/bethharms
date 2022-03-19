#ifndef Bureaucrat_H
#define Bureaucrat_H

using namespace std;

#include <iostream>
#include <string>
#include "Computer.h"

class Bureaucrat : public Computer
{
    public:

    Bureaucrat(); // default constructor
    virtual void makeMove();  // causes move choice to be made
};
#endif