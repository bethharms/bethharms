#ifndef RandomComputer_H
#define RandomComputer_H

using namespace std;

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Computer.h"

class RandomComputer : public Computer
{
    public:

    RandomComputer(); // default constructor
    virtual void makeMove();  // causes move choice to be made
    int MoveCount;
    
};
#endif 
    
