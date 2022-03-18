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
    virtual char getMove();  // returns current move choice
    void makeMove();  // causes move choice to be made
    char move; // static variable move
    
    ~Toolbox();
    
};
#endif 