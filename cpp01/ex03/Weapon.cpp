#include "Weapon.hpp"

Weapon::Weapon(std::string WeaponName)    {
    setType(WeaponName);
}

Weapon::~Weapon()   {

}

const std::string& Weapon::getType( void )  {
    std::string &WeaponREF = type;
    return (WeaponREF);
}



void    Weapon::setType(std::string name)   {
    type = name;
}