/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:40:06 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/09 17:02:53 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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