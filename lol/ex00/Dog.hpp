/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:15:31 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/12 05:49:22 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal {
    public :
        Dog();
        Dog(std::string name);
        ~Dog();
        
        Dog( const Dog& src );
        Dog& operator=( const Dog& cp );

        void    makeSound() const ;
};

#endif