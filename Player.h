#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

#include <iostream>
#include <string>


class Player
{
    public:
    virtual char getMove();  // returns current move choice
    virtual void makeMove() = 0;  // causes move choice to be made
    
    ~Player();
    
    protected:
    
    char move; // static variable move
};
#endif 