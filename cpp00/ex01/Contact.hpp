#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    private :
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DSecret;

    public:
        Contact();
        ~Contact();
        void    add();
        void    view(int i, int lenght);
        void    search( void );
};

#endif