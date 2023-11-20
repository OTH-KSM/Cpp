/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:05 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/10 13:57:01 by okassimi         ###   ########.fr       */
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
		~Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator= (const Fixed& Fixed);

		void setRawBits( int const raw );
		int getRawBits( void ) const;
		
		Fixed(const int n);
		Fixed(const float n);
		float toFloat( void ) const;
		int toInt( void ) const;

		bool operator>(const Fixed& Fixed) const;
		bool operator<(const Fixed& Fixed) const;
		bool operator>=(const Fixed& Fixed) const;
		bool operator<=(const Fixed& Fixed) const;
		bool operator==(const Fixed& Fixed) const;
		bool operator!=(const Fixed& Fixed) const;

		Fixed operator+(const Fixed& with) const;
		Fixed operator-(const Fixed& with) const;
		Fixed operator*(const Fixed& with) const;
		Fixed operator/(const Fixed& with) const;
		
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& Fixed);

#endif