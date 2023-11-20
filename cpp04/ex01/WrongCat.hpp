/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 05:12:43 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/12 05:53:58 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public :
        WrongCat();
        WrongCat(std::string name);
        ~WrongCat();
        
        WrongCat( const WrongCat& src );
        WrongCat& operator=( const WrongCat& cp );

        void    makeSound() const ;
};

#endif