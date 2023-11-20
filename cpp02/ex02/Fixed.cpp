/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:13 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/10 16:52:25 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(const int i) {
	// std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue = i << this->bits;
}

Fixed::Fixed(const float f) {
	// std::cout << "Float constructor called" << std::endl;
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
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& Fixed) {
	// std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPointValue = Fixed.getRawBits();
	return (*this);
}


std::ostream& operator<<(std::ostream& os, const Fixed& Fixed) {
	os << Fixed.toFloat();
	return (os);
}

Fixed::~Fixed() {
	// std::cout << "Desctroctor Called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	return (this->fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	this->fixedPointValue = raw;
}


/**************************** Arithmitic Operators ********************************/

Fixed Fixed::operator+(const Fixed& with) const {
	Fixed result;
	result.fixedPointValue = this->fixedPointValue + with.fixedPointValue;
	return (result);
}

Fixed Fixed::operator-(const Fixed& with) const {
	Fixed result;
	result.fixedPointValue = this->fixedPointValue - with.fixedPointValue;
	return (result);
}

Fixed Fixed::operator*(const Fixed& with) const {
	Fixed result(toFloat() * with.toFloat());
	return (result);
}

Fixed Fixed::operator/(const Fixed& with) const {
	Fixed result(toFloat() / with.toFloat());
	return (result);
}

/**************************** incrementing Operatons ******************************/

Fixed& Fixed::operator++() { //++a
	this->fixedPointValue++;
	return (*this);
}

Fixed& Fixed::operator--()	{
	this->fixedPointValue--;
	return (*this);
}

Fixed	Fixed::operator++(int)	{ //a++
	Fixed tmp;
	tmp.fixedPointValue = this->fixedPointValue;
	++(this->fixedPointValue);
	return (tmp);
}

Fixed	Fixed::operator--(int)	{
	Fixed tmp;
	tmp.fixedPointValue = this->fixedPointValue;
	--(this->fixedPointValue);
	return (tmp);
}

/**************************** Comparison Operators ********************************/

bool Fixed::operator>(const Fixed& Fixed)	const {
	if (this->fixedPointValue > Fixed.fixedPointValue)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& Fixed)	const {
	if (this->fixedPointValue < Fixed.fixedPointValue)
		return (true);
	return (false);	
}

bool Fixed::operator>=(const Fixed& Fixed)	const {
	if (this->fixedPointValue >= Fixed.fixedPointValue)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& Fixed)	const {
	if (this->fixedPointValue <= Fixed.fixedPointValue)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& Fixed)	const {
	if (this->fixedPointValue == Fixed.fixedPointValue)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& Fixed)	const {
	if (this->fixedPointValue != Fixed.fixedPointValue)
		return (true);
	return (false);
}

/********************************** Max Min ***************************************/

Fixed& Fixed::min(Fixed& a, Fixed& b)	{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)	{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)	{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)	{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}