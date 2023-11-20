#include "ScavTrap.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 23:27:14 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/10 23:27:15 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

/*********************** Canonical Form Elements ******************************/

ScavTrap::ScavTrap()    {
    this->name = "Default ScavTrap";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << name << " Born Now !!!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)    {
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << name << " Born Now !!!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = src;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &src)   {
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
}

ScavTrap::~ScavTrap(void)   {
    std::cout << "ScavTrap destructor called" << std::endl;
}

/*********************** ScavTrap Methods ************************************/

void	ScavTrap::attack(std::string const &target) {
    if (energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "ScavTrap " << name << " can't do nothing!!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints -= 1;
}

void    ScavTrap::show(void) {
    std::cout << "ScavTrap name: " << this->name << std::endl;
    std::cout << "ScavTrap hitPoints: " << this->hitPoints << std::endl;
    std::cout << "ScavTrap energyPoints: " << this->energyPoints << std::endl;
    std::cout << "ScavTrap attackDamage: " << this->attackDamage << std::endl;
    std::cout << std::endl;
}

void ScavTrap::guardGate()  {
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}