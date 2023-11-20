/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:05 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/10 12:54:01 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>


class Fixed {
	private :
		int					fixedPointValue;
		static const int	bits = 8;
	public :
		Fixed(); 
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed& copy);
		Fixed& operator= (const Fixed& Fixed);
		~Fixed();

		void	setRawBits( int const raw );
		int		getRawBits( void ) const;
		
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& Fixed);

#endif