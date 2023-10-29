#include "HumanA.hpp"
#include "Weapon.hpp"
using namespace std;

HumanA::HumanA() {
    
}

HumanA::HumanA(string Username, Weapon WeaponType) {
    name = Username;
    weapon = WeaponType;
}


HumanA::~HumanA() {

}

void    HumanA::attack()    {
    cout << name << "attacks with their" << weapon.getType() << endl;
}