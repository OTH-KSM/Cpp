#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
    public :
        Weapon *weapon;
        std::string name;
        void    attack();
        void    setWeapon(Weapon WeaponType);
        HumanB();
        ~HumanB();
        HumanB(std::string Username);
};

#endif