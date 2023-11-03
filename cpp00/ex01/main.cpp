#include "Contact.hpp"
#include "Phonebook.hpp"


int main (void)
{
	Phonebook		PhoneList;
	std::string		input;
	int				lenght;

	lenght = 0;
	PhoneList.DisplayPrompt();
	while (1) {
		if (std::cin.eof())
			return (EXIT_FAILURE);
		std::cout << "Please select an option : ";
		std::cin >> input;
		if (input == "ADD")
			PhoneList.AddNewContact(PhoneList, &lenght);
		else if (input == "SEARCH")
			PhoneList.DisplayAndSearch(PhoneList, lenght);
		else if (input == "EXIT")
			return (EXIT_SUCCESS);
	}
}