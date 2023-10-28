#include "Contact.hpp"
#include "Phonebook.hpp"
using namespace std;

Contact::Contact() {

}

Contact::~Contact() {

}

void    _AddNewContact(Phonebook& Phonelist, int *lenght)
{
    static int index;

    Contact mate;

    cout << "First name : ";
    cin >> mate.FirstName;
    // cout << "Last name : ";
    // cin >> mate.LastName;
    // cout << "Nickname : ";
    // cin >> mate.Nickname;
    // cout << "Phone number : ";
    // cin >> mate.PhoneNumber;
    // cout << "darkest secret : ";
    // cin >> mate.DSecret;
    // cout << index << endl;
    if (index == 8)
        index = 0;
    Phonelist.contact[index] = mate;
    index++;
    (*lenght)++;
    if (*lenght > 8)
        *lenght = 8;
}

void    _DispalyContacts(Phonebook& Phonelist, int lenght)
{
    string indexStr;
    string firstName;
    string lastName;
    string nickname;

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

void    _SearchContact(Phonebook& Phonelist, int lenght)
{
    string InputNumber;
    cout << "Which Contact Do You Want To See ? : ";
    cin >> InputNumber;
    int index = stoi(InputNumber);
    if (index >= 1 && index <= lenght)
    {
        cout << "First Name : " << Phonelist.contact[index - 1].FirstName << endl;
        cout << "Last Name  : " << Phonelist.contact[index - 1].LastName << endl;
        cout << "Nickname   : " << Phonelist.contact[index - 1].Nickname << endl;
        cout << "PhoneName  : " << Phonelist.contact[index - 1].PhoneNumber << endl;
        cout << "DarSecret  : " << Phonelist.contact[index - 1].DSecret << endl;
    }
    else
        cout << "Contact Doesn't Exist Try Another Account" << endl;
}

void    _DisplayAndSearch(Phonebook& Phonelist, int lenght)
{
    std::cout << "  Index   | FrstName | LastName | Nickname " << std::endl;
    std::cout << "----------|----------|----------|----------" << std::endl;
    _DispalyContacts(Phonelist, lenght);
    _SearchContact(Phonelist, lenght);
}
