#ifndef Toolbox_H
#define Toolbox_H

using namespace std;

#include <iostream>
#include <string>
#include "Computer.h"

class Toolbox : public Computer
{
    public:

    Toolbox(); // default constructor
    void makeMove();  // causes move choice to be made

};
#endif