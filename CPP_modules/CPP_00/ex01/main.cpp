/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:28:47 by brumarti          #+#    #+#             */
/*   Updated: 2023/09/19 18:41:51 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

void	initial_print()
{
	cout << "0---------------------------------------0\n"
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
			"0---------------------------------------0" << endl;
}

int main(void)
{
	PhoneBook	pb;
	string		option;
	
	initial_print();
	while (1)
	{
		cout << "Phonebook> ";
		getline(cin, option);
		if (option == "ADD")
			pb.addContact();
		else if (option == "SEARCH")
			pb.searchContacts();
		else if (option == "EXIT")
		{
			cout << "Have a nice day ! 👋";
			break ;
		}
	}
	return (0);
}