#include "Computer.h"
#include "Tournament.h"
#include "Bureaucrat.h"
#include "RandomComputer.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "PaperDoll.h"
#include "Player.h"
#include "Avalanche.h"
#include "Toolbox.h"

int main()
{
    Player* a = new Avalanche();
    Player* b = new Bureaucrat();
    Player* b2 = new Bureaucrat();
    Player* t = new Toolbox();
    Player* t2 = new Toolbox();
    Player* c = new Crescendo();
    Player* c2 = new Crescendo();
    Player* f = new FistfullODollars();

    array<Player*,8> players_array = {a,b,b,t,t,c,c,f};
    Tournament t1;

    t1.run(players_array);

    Referee ref;

    ref.refGame(c,t);
    cout<<c->getMove()<<endl;
    cout<<t->getMove()<<endl;

    if (t1.thirdRound[1]==c)
    {
        cout<<"c"<<endl;
    }

}

