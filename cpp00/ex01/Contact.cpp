/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:18:11 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/07 16:48:33 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	reform(std::string& str) {
	for (int i = 0; str[i]; i++) {
		if (str[i] == '\t')
			str.replace(i, 1, "    ");
	}
}

int	is_printable(std::string str) {
	for (int i = 0; str[i]; i++) {
		if (!isprint(str[i]) && str[i] != '\t')
			return (0);
	}
	return (1);
}

void	Contact::add() {
	while (1) {
    	std::cout << "First name : ";
		if (!getline(std::cin, this->FirstName))
			exit (EXIT_SUCCESS);
		if (this->FirstName.empty() || !is_printable(this->FirstName)) {
			std::cout << "Invalid input" << std::endl;
			std::cin.clear();
			continue ;
		}
		reform(this->FirstName);
		break ;
	}
	while (1) {
		std::cout << "Last name : ";
		if (!getline(std::cin, this->LastName))
			exit (EXIT_SUCCESS);
		if (this->LastName.empty() || !is_printable(this->LastName)) {
			std::cout << "Invalid input" << std::endl;
			std::cin.clear();
			continue ;
		}
		reform(this->LastName);
		break ;
	}
	while (1) {
		std::cout << "Nickname : ";
		if (!getline(std::cin, this->Nickname))
			exit (EXIT_SUCCESS);
		if (this->Nickname.empty() || !is_printable(this->Nickname)) {
			std::cout << "Invalid input" << std::endl;
			std::cin.clear();
			continue ;
		}
		reform(this->Nickname);
		break ;
	}
		while (1) {
			std::cout << "Phone number : ";
		if (!getline(std::cin, this->PhoneNumber))
			exit (EXIT_SUCCESS);
		if (this->PhoneNumber.empty() || !is_printable(this->PhoneNumber)) {
				std::cout << "Invalid input" << std::endl;
				std::cin.clear();
				continue ;
		}
		reform(this->PhoneNumber);
		break ;
	}
    while (1) {
    	std::cout << "Darkest secret : ";
		if (!getline(std::cin, this->DSecret))
			exit (EXIT_SUCCESS);
		if (this->DSecret.empty() || !is_printable(this->DSecret)) {
			std::cout << "Invalid input" << std::endl;
			std::cin.clear();
			continue ;
		}
		reform(this->DSecret);
		break ;
	}
}

void	Contact::view(int i)	{
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
	

	std::cout << std::setw(10) << indexStr;
	std::cout << "|";
	std::cout << std::setw(10) << firstName;
	std::cout << "|";
	std::cout << std::setw(10) << lastName;
	std::cout << "|";
	std::cout << std::setw(10) << nickname;
	std::cout << std::endl;
}

void	Contact::search( void )	{
	std::cout << "First Name : " << this->FirstName << std::endl;
	std::cout << "Last Name  : " << this->LastName << std::endl;
	std::cout << "Nickname   : " << this->Nickname << std::endl;
	std::cout << "PhoneName  : " << this->PhoneNumber << std::endl;
	std::cout << "DarSecret  : " << this->DSecret << std::endl;
}