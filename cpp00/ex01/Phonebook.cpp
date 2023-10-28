#include "Phonebook.hpp"
#include "Contact.hpp"
using namespace std;

Phonebook::Phonebook() {

}

Phonebook::~Phonebook() {

}

int main (void)
{
    Phonebook   PhoneList;
    int         lenght;
    string      input;

    cout << "*************************************************************" << endl;
    cout << "**                 Here Is My Awesome PhoneBook 📖         **" << endl;
    cout << "**                                                         **" << endl;
    cout << "** -> ADD    : To add new contact to the Phonebook         **" << endl;
    cout << "** -> SEARCH : To Display and Search for contact saved     **" << endl;
    cout << "** -> EXIT   : To exit from Your Awsome PhoneBook          **" << endl;
    cout << "** Note : Any Input out of those will not be acceptable    **" << endl;
    cout << "**                                                         **" << endl;
    cout << "*************************************************************" << endl << endl;

    while (1) {
        cout << "Welcome! Please select an option : ";
        cin >> input;
        if (input == "ADD")
            _AddNewContact(PhoneList, &lenght);
        else if (input == "SEARCH")
            _DisplayAndSearch(PhoneList, lenght);
        else if (input == "EXIT")
            return (1);
    }
}