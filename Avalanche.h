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
    void makeMove();  // causes move choice to be made

};
#endif

