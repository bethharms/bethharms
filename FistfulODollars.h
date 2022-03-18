#ifndef FistfulODollars_H
#define FistfulODollars_H

using namespace std;

#include <iostream>
#include <string>
#include "Computer.h"

class FistfulODollars : public Computer
{
    public:

    FistfulODollars(); // default constructor
    int MoveCount = 0; //count moves
    void makeMove();  // causes move choice to be made
    
};
#endif 