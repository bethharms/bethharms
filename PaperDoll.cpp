#include "PaperDoll.h"

PaperDoll::PaperDoll()
{
}

void PaperDoll::makeMove()
{
 if (MoveCount = 0)
 {
     move = 'P';
     MoveCount++;
 }
 else if (MoveCount = 1)
 {
     move = 'S';
     MoveCount++;
 }
 else
 {
     move = 'S';
     MoveCount = 0;
 }
}