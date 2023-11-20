/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:47:12 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/11 17:24:29 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
    ClapTrap	one;

    std::cout << std::endl;
    one.show();
    one.attack("two");
    one.takeDamage(200);
    std::cout << std::endl;
    one.show();
    std::cout << std::endl;
    one.beRepaired(3);
    std::cout << std::endl;
    return (0);
}