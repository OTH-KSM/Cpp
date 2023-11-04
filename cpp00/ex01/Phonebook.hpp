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
        Phonebook();
        ~Phonebook();
        void    DisplayPrompt( void );
        void    AddNewContact(int *lenght);
        void    DisplayAndSearch(int lenght);
};

void	_checkEOF( void );

#endif