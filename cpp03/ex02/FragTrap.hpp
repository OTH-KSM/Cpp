/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:19:06 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/11 18:21:16 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const &src);
        FragTrap	&operator=(FragTrap const &src);
        ~FragTrap(void);
        
        void    show();
        void	attack(std::string const &target);
        void    highFivesGuys();
};

#endif