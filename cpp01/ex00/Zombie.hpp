/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:17:52 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/07 23:38:29 by okassimi         ###   ########.fr       */
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

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif