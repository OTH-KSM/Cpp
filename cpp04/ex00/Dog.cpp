/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:15:28 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/12 05:56:59 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(std::string name) {
    this->type = name;
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( const Dog& src )
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog& Dog::operator=( const Dog& cp )
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->type = cp.type;
    return *this;
}

Dog::~Dog(void) {
    std::cout << "Dog destructor called" << std::endl;
}


void    Dog::makeSound( void ) const {
    std::cout << "Hoooowwwww!!" << std::endl;
}