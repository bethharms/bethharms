#ifndef HUMAN_H
#define HUMAN_H

using namespace std;

#include <iostream>
#include <string>
#include "Player.h"


class Human : public Player
{
    public:
    char getMove();  // returns current move choice
    void makeMove();  // causes move choice to be made
    
    char move; // static variable move
    
};
#endif 
