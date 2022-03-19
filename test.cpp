#include "Referee.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Tournament.h"

int main()
{
    Player* a = new Avalanche();
    Player* b = new Bureaucrat();
    Referee r;

    //array<Player*,8> players_array = {a,a,a,a,a,b,a,a};

    if (r.refGame(b,a) == 'W')
    {
        cout<<"Y"<<endl;
        
    }
    else
    
    {cout<<"N"<<endl;}

    cout<<a->getMove()<<endl;
    cout<<b->getMove()<<endl;

}