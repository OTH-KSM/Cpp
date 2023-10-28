#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    public:
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        int PhoneNumber;
        std::string DSecret;
        Contact();
        ~Contact();
};


#endif