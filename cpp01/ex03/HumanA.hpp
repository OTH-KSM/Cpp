#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
    public :
        Weapon weapon;
        std::string name;
        void    attack();
        HumanA();
        HumanA(std::string Username, Weapon WeaponType);
        ~HumanA();
};

#endif