#include "HumanB.hpp"
#include "Weapon.hpp"
using namespace std;

void    HumanB::setWeapon(Weapon WeaponType) {

}

HumanB::HumanB(std::string Username) {
    name = Username;
}

HumanB::HumanB()  {
    
}

HumanB::~HumanB() {

}

void    HumanB::attack()    {
    cout << name << "attacks with their" << weapon.getType() << endl;
}