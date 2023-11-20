/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:15:00 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/12 05:47:14 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
    this->type = "Animal";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string name) {
    this->type = name;
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal( const Animal& src )
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal& Animal::operator=( const Animal& cp )
{
    std::cout << "Animal assignment operator called" << std::endl;
    this->type = cp.type;
    return *this;
}

Animal::~Animal(void) {
    std::cout << "Animal destructor called" << std::endl;
}

void    Animal::makeSound( void ) const {
    std::cout << "????????" << std::endl;
}

const std::string&    Animal::getType( void ) const {
    return (this->type);
}
