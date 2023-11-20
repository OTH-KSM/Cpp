/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:18:22 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/07 15:48:06 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main (void)
{
	Phonebook		PhoneList;
	std::string		input;
	int				lenght;

	lenght = 0;
	PhoneList.DisplayPrompt();
	while (1) {
		std::cout << "Please select an option : ";
		if (!getline(std::cin, input))
			return (EXIT_SUCCESS);
		else if (input == "ADD")
			PhoneList.AddNewContact(&lenght);
		else if (input == "SEARCH")
			PhoneList.DisplayAndSearch(lenght);
		else if (input == "EXIT")
			return (EXIT_SUCCESS);
	}
}