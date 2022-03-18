#include "FistfullODollars.h"

FistfullODollars::FistfullODollars()
{
}

void FistfullODollars::makeMove()
{
 if (MoveCount == 0)
 {
     move = 'R';
     MoveCount++;
 }
 else if (MoveCount == 1)
 {
     move = 'P';
     MoveCount++;
 }
 else
 {
     move = 'P';
     MoveCount = 0;
 }
}
