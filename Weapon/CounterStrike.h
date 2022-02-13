
#include "Weapon.h"

class CounterStrike
{
public:
    CounterStrike();
    CounterStrike(Weapon* weapon);
    ~CounterStrike();

    void SelectAction();
    void SelectWeapon();
    void Action1();
    void Action2();
    void Name();
    void Coord();
    
    //void Draw();    
    Weapon* weapon;
};
