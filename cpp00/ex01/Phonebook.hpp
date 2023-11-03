#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class Phonebook {
    public:
        Contact contact[8];
        Phonebook();
        ~Phonebook();
        void    DisplayPrompt( void );
        void    AddNewContact(Phonebook& Phonelist, int *lenght);
        void    DisplayAndSearch(Phonebook& Phonelist, int lenght);
        void    DispalyContacts(Phonebook& Phonelist, int lenght);
        void    SearchContact(Phonebook& Phonelist, int lenght);
};

#endif