/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:47:12 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/11 18:39:32 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
    /* The Base Class Behavior */
    ClapTrap clap;

    clap.show();
    std::cout << std::endl;
    clap.attack("Othmane");
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
    {
        clap.takeDamage(1);
        clap.beRepaired(1);
    }
    std::cout << std::endl;
    clap.attack("Othmane");


    std::cout << std::endl;
    /* The derived Class Behavior */
    std::cout << std::endl;

    
    ScavTrap scav;
    scav.show();
    std::cout << std::endl;
    scav.attack("Ossama");
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
    {
        scav.takeDamage(1);
        scav.beRepaired(1);
    }
    std::cout << std::endl;
    scav.attack("Ossama");
}