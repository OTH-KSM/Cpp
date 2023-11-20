/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:40:09 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/07 22:40:10 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon {
    private : 
        std::string type;
    public :
        const std::string& getType( void );
        void    setType(std::string name);
        Weapon(std::string WeaponType);
        Weapon();
        ~Weapon();
};

#endif