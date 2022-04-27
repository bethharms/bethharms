#ifndef COMPUTER_H
#define COMPUTER_H

using namespace std;

#include <iostream>
#include <string>
#include "Player.h"


class Computer : public Player
{
    public:

    Computer(); // default constructor
    char getMove();  // returns current move choice
    virtual void makeMove();  // causes move choice to be made
    
};
#endif 
    
