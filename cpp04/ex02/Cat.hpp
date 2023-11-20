/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 04:15:23 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/12 18:05:18 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
    private :
        Brain   *brain;
    public :
        Cat();
        Cat(std::string name);
        ~Cat();
        
        Cat( const Cat& src );
        Cat& operator=( const Cat& cp );

        void    makeSound() const ;
};

#endif