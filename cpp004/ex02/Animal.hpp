/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:14:43 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/12 13:47:21 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
    protected :
        std::string type;
    public :
        Animal();
        Animal(std::string name);
        virtual ~Animal();
        
        Animal( const Animal& src );
        Animal& operator=( const Animal& cp );

        virtual void    makeSound() const = 0;
        const std::string&    getType() const ;
};

#endif