#ifndef FistfullODollars_H
#define FistfullODollars_H

using namespace std;

#include <iostream>
#include <string>
#include "Computer.h"

class FistfullODollars : public Computer
{
    public:

    FistfullODollars(); // default constructor
    int MoveCount = 0; //count moves
    void makeMove();  // causes move choice to be made
    
};
#endif 