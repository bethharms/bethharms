#include "Computer.h"

Computer::Computer()
{
}

void Computer::makeMove()
{
 move = 'R';   
}

char Computer::getMove()
{
    return move;
}

