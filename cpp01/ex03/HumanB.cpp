/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:39:54 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/09 15:31:32 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void    HumanB::setWeapon(Weapon &WeaponType) {
    this->weapon = &WeaponType;
}

HumanB::HumanB(std::string Username) {
    name = Username;
    this->weapon = NULL;
}

HumanB::~HumanB() {

}

void    HumanB::attack()    {
    if (weapon == NULL) {
        std::cout << "No weapon equipped" << std::endl;
        exit(1);
    }
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}