#include "Crescendo.h"

Crescendo::Crescendo()
{
}

void Crescendo::makeMove()
{
 if (MoveCount == 0)
 {
     move = 'P';
     MoveCount++;
 }
 else if (MoveCount == 1)
 {
     move = 'S';
     MoveCount++;
 }
 else
 {
     move = 'R';
     MoveCount = 0;
 }  
}
