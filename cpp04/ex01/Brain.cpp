/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 06:11:33 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/12 17:40:44 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain created." << std::endl;
}

Brain::~Brain( void )
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain( const Brain& src )
{
    *this = src;
}

Brain& Brain::operator=( const Brain& src )
{
    std::cout << "Brain copy called." << std::endl;
    if ( this != &src ) {
        for ( int i = 0; i < 100; i++ ) {
            this->ideas[i] = src.ideas[i];
        }
    }
    return *this;
}