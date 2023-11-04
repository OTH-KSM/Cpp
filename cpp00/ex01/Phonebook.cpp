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

void    Phonebook::AddNewContact(int *lenght) {
    static int index;

    if (index == 8)
        index = 0;
    this->contact[index].add();
    index++;
    (*lenght)++;
    if (*lenght > 8)
        *lenght = 8;
}

void    Phonebook::DisplayAndSearch(int lenght)   
{
    // if No Contact saved no need to print something

    if (lenght == 0)    {
        std::cout << "No Contact has been added" << std::endl;
        return ;
    }

    // Displaying all the saved Contacts

    std::cout << "  Index   | FrstName | LastName | Nickname " << std::endl;
    std::cout << "----------|----------|----------|----------" << std::endl;
    for (int i = 0; i < lenght; i++) {
        this->contact[i].view(i, lenght);
    }

    // Asking the user which user he want to see all its infomrations

    while (1)
    {
        std::string InputNumber;
        std::cout << "Which Contact Do You Want To See ? : ";
        std::cin >> InputNumber;
        _checkEOF();
        if (InputNumber.length() == 1 && (InputNumber[0] >= '1' && InputNumber[0] <= std::to_string(lenght)[0]))
        {
            int index = stoi(InputNumber);
            this->contact[index - 1].search();
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
