/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:58:05 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/07 22:05:08 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private :
        std::string name;
    public :
        void announce( void );
        void setName(std::string newName);
        Zombie();
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif