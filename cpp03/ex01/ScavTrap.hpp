/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 23:27:19 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/11 17:52:15 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ScavTrap	&operator=(ScavTrap const &src);
        ~ScavTrap(void);
        
        void    show();
        void	attack(std::string const &target);
        void    guardGate();
};

#endif