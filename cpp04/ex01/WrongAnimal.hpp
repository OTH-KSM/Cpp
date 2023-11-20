/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 05:12:37 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/12 13:01:01 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {
    protected :
        std::string type;
    public :
        WrongAnimal();
        WrongAnimal(std::string name);
        virtual ~WrongAnimal();
        
        WrongAnimal( const WrongAnimal& src );
        WrongAnimal& operator=( const WrongAnimal& cp );

        void    makeSound() const ;
        const std::string&    getType() const ;
};

#endif