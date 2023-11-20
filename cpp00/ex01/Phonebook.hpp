/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:18:32 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/07 16:01:16 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class Phonebook {
    private :
        Contact contact[8];
    public:
        void    DisplayPrompt( void );
        void    AddNewContact(int *lenght);
        void    DisplayAndSearch(int lenght);
};

void	reform(std::string& str);
int     is_printable(std::string str);

#endif