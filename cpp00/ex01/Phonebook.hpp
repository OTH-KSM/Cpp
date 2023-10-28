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
};

void     _AddNewContact(Phonebook& Phonelist, int *lenght);
void    _DisplayAndSearch(Phonebook& Phonelist, int lenght);
int     _settings(std::string input);

#endif