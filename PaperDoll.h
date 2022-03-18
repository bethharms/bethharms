#ifndef PaperDoll_H
#define PaperDoll_H

using namespace std;

#include <iostream>
#include <string>
#include "Computer.h"

class PaperDoll : public Computer
{
    public:

    PaperDoll(); // default constructor
    void makeMove();  // causes move choice to be made
    int MoveCount = 0;

    
};
#endif 