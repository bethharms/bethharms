#include "Computer.h"
#include "Tournament.h"
#include "Bureaucat.h"
#include "RandomComputer.h"
#include "Crescendo.h"
#include "FistfulODollars.h"
#include "PaperDoll.h"
#include "Player.h"
#include "Avalanche.h"
#include "Toolbox.h"

int main()
{
    Player* a = new Avalanche();
    Player* b = new Bureaucat();
    Player* b2 = new Bureaucat();
    Player* t = new Toolbox();
    Player* t2 = new Toolbox();
    Player* c = new Crescendo();
    Player* c2 = new Crescendo();
    Player* f = new FistfulODollars();

    array<Player*,8> players_array = {a,b,b2,t,t2,c,c2,f};
    Tournament t1;
    if (t1.run(players_array)==players_array[3])
    {
        cout<< "yay" <<endl;
    }
    
}


