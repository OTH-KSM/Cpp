#include "Contact.hpp"
#include "Phonebook.hpp"

void	_checkEOF( void )	{
	if (std::cin.eof())
		exit (0);
}

int main (void)
{
	Phonebook		PhoneList;
	std::string		input;
	int				lenght;

	lenght = 0;
	PhoneList.DisplayPrompt();
	while (1) {
		_checkEOF();
		std::cout << "Please select an option : ";
		std::cin >> input;
		_checkEOF();
		if (input == "ADD")
			PhoneList.AddNewContact(&lenght);
		else if (input == "SEARCH")
			PhoneList.DisplayAndSearch(lenght);
		else if (input == "EXIT")
			return (EXIT_SUCCESS);
	}
}