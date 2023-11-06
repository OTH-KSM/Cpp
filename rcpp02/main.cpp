#include "main.hpp"

Fixed::Fixed() {
	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) {
	this->n = copy.n;
}

Fixed& Fixed::operator= (const Fixed& Fixed) {
	
}	

Fixed::~Fixed() {
	std::cout << "Desctroctor Called" << std::endl;
}