/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:57:41 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/09 15:27:13 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ( void )
{
    Zombie *tmp = zombieHorde(5, "Ahmed");
    if (!tmp)
        return (0);
    for (int i = 0; i < 5; i++) {
        (tmp + i)->announce();
    }
    delete[] tmp;
}
