/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:19:03 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/11 18:23:03 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

/*********************** Canonical Form Elements ******************************/

FragTrap::FragTrap()    {
    this->name = "Default FragTrap";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << name << " Born Now !!!" << std::endl;
}

FragTrap::FragTrap(std::string name)    {
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << name << " Born Now !!!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
}

FragTrap	&FragTrap::operator=(FragTrap const &src)   {
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
}

FragTrap::~FragTrap(void)   {
    std::cout << "FragTrap destructor called" << std::endl;
}

/*********************** FragTrap Methods ************************************/

void	FragTrap::attack(std::string const &target) {
    if (energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "FragTrap " << name << " can't do nothing!!" << std::endl;
        return;
    }
    std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints -= 1;
}

void    FragTrap::show(void) {
    std::cout << "FragTrap name: " << this->name << std::endl;
    std::cout << "FragTrap hitPoints: " << this->hitPoints << std::endl;
    std::cout << "FragTrap energyPoints: " << this->energyPoints << std::endl;
    std::cout << "FragTrap attackDamage: " << this->attackDamage << std::endl;
    std::cout << std::endl;
}

void FragTrap::highFivesGuys()  {
    std::cout << "High Fives" << std::endl;
}