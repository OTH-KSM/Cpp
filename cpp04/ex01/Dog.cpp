/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:15:28 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/12 18:09:34 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(std::string name) {
    this->type = name;
    this->brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( const Dog& src ):brain(new Brain(*src.brain))
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=( const Dog& cp )
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->type = cp.type;
    delete this->brain;
    this->brain = new Brain(*cp.brain);
    return *this;
}

Dog::~Dog(void) {
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

void    Dog::makeSound( void ) const {
    std::cout << "Hoooowwwww!!" << std::endl;
}