#include "Referee.h"

Referee::Referee()
{

}

char Referee::refGame(Player* p1, Player* p2)
{
    p1->makeMove();
    p2->makeMove();
    
    if (p1->getMove() == p2->getMove())
    {
        return 'T';
    }

    else if (p1->getMove() == 'R' && p2->getMove() == 'S')
    {
        return 'W';
    }

    else if (p1->getMove() == 'P' && p2->getMove() == 'S')
    {
        return 'L';
    }

    else if (p1->getMove() == 'P' && p2->getMove() == 'R')
    {
        return 'L';
    }

    else if (p1->getMove() == 'S' && p2->getMove() == 'P')
    {
        return 'W';
    }
    
    else if (p1->getMove() == 'S' && p2->getMove() == 'R')
    {
        return 'L';
    }

    else
    {
        return 'L';
    }
}

