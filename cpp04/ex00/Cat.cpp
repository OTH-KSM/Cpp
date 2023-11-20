/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:15:21 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/12 05:48:20 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(std::string name) {
    this->type = name;
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( const Cat& src )
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat& Cat::operator=( const Cat& cp )
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->type = cp.type;
    return *this;
}

Cat::~Cat(void) {
    std::cout << "Cat destructor called" << std::endl;
}


void    Cat::makeSound( void ) const {
    std::cout << "Miiiiawwww!!" << std::endl;
}