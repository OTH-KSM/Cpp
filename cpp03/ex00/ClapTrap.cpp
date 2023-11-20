/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:47:09 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/11 17:22:08 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/******************************* Canonical Form Elements ********************************************/

ClapTrap::ClapTrap() : name("Default ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "Default ClapTrap Born Now !!!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << name << " Born Now !!!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &src) {
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap destructor called" << std::endl;
}

/******************************* Member Functions  ********************************************/

void    ClapTrap::show(void) {
    std::cout << "ClapTrap name: " << this->name << std::endl;
    std::cout << "ClapTrap hitPoints: " << this->hitPoints << std::endl;
    std::cout << "ClapTrap energyPoints: " << this->energyPoints << std::endl;
    std::cout << "ClapTrap attackDamage: " << this->attackDamage << std::endl;
    std::cout << std::endl;
}

void	ClapTrap::attack(std::string const &target) {
    if (energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " can't do nothing!!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount) {
    if (energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " can't do nothing!!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " takes " << amount << " damage!" << std::endl;
    if (hitPoints <= amount)
        hitPoints = 0;
    else
        hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " can't do nothing!!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points!" << std::endl;
    energyPoints -= 1;
    hitPoints += amount;
}
