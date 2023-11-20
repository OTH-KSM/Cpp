/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:13 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/10 13:30:14 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int i) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue = i << this->bits;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointValue = roundf(f * (1 << this->bits));
}

float Fixed::toFloat( void ) const {
	return ((float)this->fixedPointValue / (float)(1 << this->bits));
}

int Fixed::toInt( void ) const {
	return (this->fixedPointValue / (1 << this->bits));
}

Fixed::Fixed() {
	this->fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& Fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPointValue = Fixed.getRawBits();
	return (*this);
}


std::ostream& operator<<(std::ostream& os, const Fixed& Fixed) {
	os << Fixed.toFloat();
	return (os);
}

Fixed::~Fixed() {
	std::cout << "Desctroctor Called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	return (this->fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	this->fixedPointValue = raw;
}
