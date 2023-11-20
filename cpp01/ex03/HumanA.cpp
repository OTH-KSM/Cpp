/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:39:47 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/07 22:39:48 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string Username, Weapon &WeaponType): weapon(WeaponType) {
    name = Username;
}


HumanA::~HumanA() {

}

void    HumanA::attack()  {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}