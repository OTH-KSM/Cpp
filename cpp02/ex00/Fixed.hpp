/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:05 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/10 12:39:26 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
	private :
		int					fixedPointValue;
		static const int	bits = 8;
	public :
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator= (const Fixed& Fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};



#endif