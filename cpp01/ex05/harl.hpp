/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:45:32 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/07 22:45:33 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
	private :
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	public :
		Harl();
		~Harl();
		void	complain(std::string level);
};

typedef void (Harl::*functions)(void);

#endif