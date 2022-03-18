#ifndef AVALANCHE_H
#define AVALANCHE_H

using namespace std;

#include <iostream>
#include <string>
#include "Computer.h"


class Avalanche : public Computer
{
    public:

    Avalanche(); // default constructor
    char getMove();  // returns current move choice
    void makeMove();  // causes move choice to be made
    char move; // static variable move
    
    ~Avalanche();
    
};
#endif 
    
