#include "Contact.hpp"
#include "Phonebook.hpp"

Contact::Contact() {

}

Contact::~Contact() {

}

void	Contact::add() {
	std::cout << "First name : ";
    std::cin >> this->FirstName;
    _checkEOF();
    std::cout << "Last name : ";
    std::cin >> this->LastName;
    _checkEOF();
    std::cout << "Nickname : ";
    std::cin >> this->Nickname;
    _checkEOF();
    std::cout << "Phone number : ";
    std::cin >> this->PhoneNumber;
    _checkEOF();
    std::cout << "darkest secret : ";
    std::cin >> this->DSecret;
    _checkEOF();
}

void	Contact::view(int i, int lenght)	{
	std::string indexStr;
    std::string firstName;
    std::string lastName;
    std::string nickname;

	indexStr = std::to_string(i + 1);
	firstName = this->FirstName;
	lastName = this->LastName;
	nickname = this->Nickname;

	if (indexStr.size() > 10) indexStr = indexStr.substr(0, 9) + ".";
	if (firstName.size() > 10) firstName = firstName.substr(0, 9) + ".";
	if (lastName.size() > 10) lastName = lastName.substr(0, 9) + ".";
	if (nickname.size() > 10) nickname = nickname.substr(0, 9) + ".";
	

	std::cout << std::setw(10) << std::left << indexStr;
	std::cout << "|";
	std::cout << std::setw(10) << std::left << firstName;
	std::cout << "|";
	std::cout << std::setw(10) << std::left << lastName;
	std::cout << "|";
	std::cout << std::setw(10) << std::left << nickname;
	std::cout << std::endl;
}

void	Contact::search( void )
{
	std::cout << "First Name : " << this->FirstName << std::endl;
	std::cout << "Last Name  : " << this->LastName << std::endl;
	std::cout << "Nickname   : " << this->Nickname << std::endl;
	std::cout << "PhoneName  : " << this->PhoneNumber << std::endl;
	std::cout << "DarSecret  : " << this->DSecret << std::endl;
}