/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:13 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/10 13:53:27 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	setRawBits(0);
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

Fixed::~Fixed() {
	std::cout << "Desctroctor Called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	this->fixedPointValue = raw;
}