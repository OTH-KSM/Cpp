/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:58:16 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/09 15:26:54 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>

Zombie* zombieHorde( int N, std::string name ) {
    Zombie *Horde = new(std::nothrow) Zombie[N];
    if (!Horde)
        return (NULL);
    for (int i = 0; i < N; i++) {
        (Horde + i)->setName(name);
    }
    return (Horde);
}