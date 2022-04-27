#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include "Player.h"
#include "Referee.h"
#include <iostream>
using namespace std;
#include <string>
#include <array>

class Tournament 
{
    public:

    Tournament(); //constructor

    Player* run(array<Player*, 8>);

    int gameScore = 0;

    Player* secondRound[4];
    Player* thirdRound[2];
    
};

#endif

