#include "RandomComputer.h"

RandomComputer::RandomComputer()
{
}

void RandomComputer::makeMove()
{
srand(time(NULL));
MoveCount = (rand() % 3);

 if (MoveCount == 0)
 {
     move = 'R';
 }
 else if (MoveCount == 1)
 {
     move = 'P';
 }
 else
 {
     move = 'S';
 }
}