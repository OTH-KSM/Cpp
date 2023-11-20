/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 05:12:35 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/12 05:40:51 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) {
    this->type = name;
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src )
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& cp )
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    this->type = cp.type;
    return *this;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void    WrongAnimal::makeSound( void ) const {
    std::cout << "????????" << std::endl;
}

const std::string&    WrongAnimal::getType( void ) const {
    return (this->type);
}
