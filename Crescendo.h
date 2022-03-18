#ifndef Crescendo_H
#define Crescendo_H

using namespace std;

#include <iostream>
#include <string>
#include "Computer.h"

class Crescendo : public Computer
{
    public:

    Crescendo(); // default constructor
    void makeMove();  // causes move choice to be made
    int MoveCount = 0;
    
};
#endif 