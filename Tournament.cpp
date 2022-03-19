#include "Tournament.h"

Tournament::Tournament()
{
}

Player* Tournament::run(array<Player*, 8> competitors)
{
    Referee ref;

    for (int i = 0 ; i < 4 ; i++)
    {
        
        for (int j = 0 ; j < 5 ; j++)
        {
            if (ref.refGame(competitors[2*i], competitors[2*i+1]) != 'L' )
            {
                gameScore++;
            }
        }

        if ( gameScore > 2 )
        {
           secondRound[i] = competitors[2*i];
        }

        else
        {
            secondRound[i] = competitors[2*i+1];
        }

        gameScore = 0;
    }

        for (int k = 0 ; k < 2; k++)
    {
        for (int l = 0 ; l < 5 ; l++)
        {
            if (ref.refGame(secondRound[2*k], secondRound[2*k+1]) != 'L' )
            {
                gameScore++;
            }
        }

        if ( gameScore > 2 )
        {
           thirdRound[k] = secondRound[2*k];
        }

        else
        {
            thirdRound[k] = secondRound[2*k+1];
        }
        gameScore = 0;
    }

    for (int m = 0 ; m < 5 ; m++)
    {
        if (ref.refGame(thirdRound[0], thirdRound[1]) != 'L' )
    {
        gameScore++;
    }
    }
        if ( gameScore > 2 )
        {
           return thirdRound[0];
        }

        else
        {
            return thirdRound[1];
        }


}
