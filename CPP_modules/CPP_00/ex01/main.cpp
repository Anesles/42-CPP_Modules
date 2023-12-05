/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:28:47 by brumarti          #+#    #+#             */
/*   Updated: 2023/12/05 15:20:55 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void	initial_print()
{
	std::cout	<< 	"0---------------------------------------0\n"
					"|                                       |\n"
					"|              Brumarti's               |\n"
					"|              Phone Book               |\n"
					"|                                       |\n"
					"|                                       |\n"
					"|                                       |\n"
					"|   Commands:                           |\n"
					"|       ADD - Adds a new contact        |\n"
					"|       SEARCH - Displays a contact     |\n"
					"|       EXIT - Terminates Phone Book    |\n"
					"|                                       |\n"
					"|                                       |\n"
					"|                                       |\n"
					"|                             @42Porto  |\n"
					"0---------------------------------------0"  << std::endl;
}

int main(void)
{
	PhoneBook		pb;
	std::string		option;
	
	initial_print();
	while (1)
	{
		std::cout << "Phonebook> ";
		getline(std::cin, option);
		if (option == "ADD" || option == "add")
			pb.addContact();
		else if (option == "SEARCH" || option == "search")
			pb.searchContacts();
		else if (option == "EXIT" || option == "exit")
		{
			std::cout << "Have a nice day ! 👋\n";
			break ;
		}
	}
	return (0);
}