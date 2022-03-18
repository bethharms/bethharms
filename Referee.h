#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

using namespace std;

#include <iostream>
#include <string>

class Referee
{
    public:

    Referee(); // Default Constructor
    char refGame(Player*, Player*); // pass by reference.  C++ is pass by value by default
    
    
};
#endif

