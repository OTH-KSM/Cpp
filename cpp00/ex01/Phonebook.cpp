#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook() {

}

Phonebook::~Phonebook() {

}

void    Phonebook::DisplayPrompt( void )    {
    std::cout << "*************************************************************" << std::endl;
	std::cout << "**                 Here Is My Awesome PhoneBook 📖         **" << std::endl;
	std::cout << "**                                                         **" << std::endl;
	std::cout << "** -> ADD    : To add new contact to the Phonebook         **" << std::endl;
	std::cout << "** -> SEARCH : To Display and Search for contact saved     **" << std::endl;
	std::cout << "** -> EXIT   : To exit from Your Awsome PhoneBook          **" << std::endl;
	std::cout << "** Note : Any Input out of those will not be acceptable    **" << std::endl;
	std::cout << "**                                                         **" << std::endl;
	std::cout << "*************************************************************" << std::endl << std::endl;
}

void    Phonebook::AddNewContact(Phonebook& Phonelist, int *lenght) {
    static int index;

    Contact mate;

    std::cout << "First name : ";
    std::cin >> mate.FirstName;
    std::cout << "Last name : ";
    std::cin >> mate.LastName;
    std::cout << "Nickname : ";
    std::cin >> mate.Nickname;
    std::cout << "Phone number : ";
    std::cin >> mate.PhoneNumber;
    std::cout << "darkest secret : ";
    std::cin >> mate.DSecret;
    if (index == 8)
        index = 0;
    Phonelist.contact[index] = mate;
    index++;
    (*lenght)++;
    if (*lenght > 8)
        *lenght = 8;
    std::cout << *lenght << std::endl;
    
}

void    Phonebook::DisplayAndSearch(Phonebook& Phonelist, int lenght)   {
    std::cout << "  Index   | FrstName | LastName | Nickname " << std::endl;
    std::cout << "----------|----------|----------|----------" << std::endl;
    DispalyContacts(Phonelist, lenght);
    SearchContact(Phonelist, lenght);
}

void    Phonebook::DispalyContacts(Phonebook& Phonelist, int lenght)    {
    std::string indexStr;
    std::string firstName;
    std::string lastName;
    std::string nickname;

    for (int i = 0; i < lenght; i++) {
        indexStr = std::to_string(i + 1);
        firstName = Phonelist.contact[i].FirstName;
        lastName = Phonelist.contact[i].LastName;
        nickname = Phonelist.contact[i].Nickname;

        if (indexStr.size() > 10) indexStr = indexStr.substr(0, 9) + ".";
        if (firstName.size() > 10) firstName = firstName.substr(0, 9) + ".";
        if (lastName.size() > 10) lastName = lastName.substr(0, 9) + ".";
        if (nickname.size() > 10) nickname = nickname.substr(0, 9) + ".";
        

        indexStr.insert(0, 10 - indexStr.length(), ' ');
        firstName.insert(0, 10 - firstName.length(), ' ');
        lastName.insert(0, 10 - lastName.length(), ' ');
        nickname.insert(0, 10 - nickname.length(), ' ');
        std::cout << indexStr << "|" << firstName << "|" << lastName << "|" << nickname << std::endl;
    }
}

void    Phonebook::SearchContact(Phonebook& Phonelist, int lenght)  {
    while (1)
    {
        std::string InputNumber;
        std::cout << "Which Contact Do You Want To See ? : ";
        std::cin >> InputNumber;
        if (InputNumber.length() == 1 && (InputNumber[0] >= '1' && InputNumber[0] <= std::to_string(lenght)[0]))
        {
            int index = stoi(InputNumber);
            std::cout << "First Name : " << Phonelist.contact[index - 1].FirstName << std::endl;
            std::cout << "Last Name  : " << Phonelist.contact[index - 1].LastName << std::endl;
            std::cout << "Nickname   : " << Phonelist.contact[index - 1].Nickname << std::endl;
            std::cout << "PhoneName  : " << Phonelist.contact[index - 1].PhoneNumber << std::endl;
            std::cout << "DarSecret  : " << Phonelist.contact[index - 1].DSecret << std::endl;
            return ;
        }
        else if (InputNumber.length() == 1 && (InputNumber[0] <= '1' && InputNumber[0] >= std::to_string(lenght)[0])) {
            std::cout << "Contact Doesn't Exist Try Another Account" << std::endl;
            continue ;
        }
        else {
            std::cout << "Invalid Input" << std::endl;
        }
    }
}
