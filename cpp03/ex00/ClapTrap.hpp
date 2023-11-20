/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:47:05 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/11 01:33:13 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
    private :
        std::string		name;
        unsigned int	hitPoints;
        unsigned int	energyPoints;
        unsigned int	attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &src);
        ClapTrap	&operator=(ClapTrap const &src);
        ~ClapTrap(void);


        void	attack(std::string const &target);
        void	takeDamage(unsigned int amount);
        void	beRepaired(unsigned int amount);
        void    show(void);
};

#endif