/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:39:58 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/07 22:39:59 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        void    setWeapon(Weapon &WeaponType);
        ~HumanB();
        HumanB(std::string Username);
};

#endif