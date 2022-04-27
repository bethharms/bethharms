#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

#include <iostream>
#include <string>
#include <array>

class Player
{
    public:
    char getMove();  // returns current move choice
    virtual void makeMove() = 0;  // causes move choice to be made

    ~Player();

    char move; // static variable move
};
#endif