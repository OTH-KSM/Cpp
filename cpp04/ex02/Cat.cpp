/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:15:21 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/12 18:15:21 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(std::string name) {
    this->type = name;
    this->brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( const Cat& src ):brain(new Brain(*src.brain))
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=( const Cat& cp )
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->type = cp.type;
    delete this->brain;
    this->brain = new Brain(*cp.brain);
    return *this;
}

Cat::~Cat(void) {
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}


void    Cat::makeSound( void ) const {
    std::cout << "Miiiiawwww!!" << std::endl;
}