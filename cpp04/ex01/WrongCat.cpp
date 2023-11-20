/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 05:12:40 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/12 05:44:30 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
    this->type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(std::string name) {
    this->type = name;
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& src )
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}

WrongCat& WrongCat::operator=( const WrongCat& cp )
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    this->type = cp.type;
    return *this;
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat destructor called" << std::endl;
}

void    WrongCat::makeSound( void ) const {
    std::cout << "Miiiiawwww!!" << std::endl;
}
