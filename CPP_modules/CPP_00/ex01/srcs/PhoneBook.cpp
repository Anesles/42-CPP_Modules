/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:59:53 by brumarti          #+#    #+#             */
/*   Updated: 2023/12/05 15:23:23 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	read_string(std::string ask_str)
{
	std::string	input;

	while (1)
	{
		std::cout << ask_str;
		getline(std::cin, input);
		if (!input.empty())
			break;
		else
			std::cout << "Empty string, try again !\n";
	}
	return (input);	
}

int	valid_number(std::string number)
{
	int	i = 0;
	
	while (number[i])
	{
		if (!isdigit(number[i]))
		{
			std::cout << "Invalid number, try again." << std::endl;
			return (1);
		}
		i++;
	}
	return (0);
	
}

PhoneBook::PhoneBook()
{
	index = 0;
	count = 0;
}

void	PhoneBook::addContact()
{
	Contact		new_contact;
	std::string	temp;

	temp = read_string("First name: ");
	new_contact.setFirstName(temp);
	temp = read_string("Last name: ");
	new_contact.setLastName(temp);
	temp = read_string("Nickname: ");
	new_contact.setNickname(temp);
	temp = read_string("Number: ");
	while (valid_number(temp) != 0)
		temp = read_string("Number: ");
	new_contact.setPhoneNumber(temp);
	temp = read_string("Darkest secret: ");
	new_contact.setDarkSecret(temp);
	
	contacts[index] = new_contact;
	if (index == MAX_CONTACTS - 1)
		index = 0;
	else
		index++;
	if (count != MAX_CONTACTS)
		count++;
}

void	PhoneBook::searchContacts()
{
	int			i = 0;
	int			index = -1;
	std::string	f_name;
	std::string	l_name;
	std::string nickname;
	
	std::cout	<< std::setw(45) << std::setfill('-') << '-' << std::setfill(' ') << std::endl
		 		<< "|" << std::setw(10) << "Index" << "|"
		 		<< std::setw(10) << "First Name" << "|"
		 		<< std::setw(10) << "Last Name" << "|"
		 		<< std::setw(10) << "Nickname" << "|" << std::endl;
	while (i < count)
	{
		std::cout << '|' << std::setw(10) << i << '|';
		f_name = contacts[i].getFirstName();
		l_name = contacts[i].getLastName();
		nickname = contacts[i].getNickname();
		if (f_name.length() <= 10)
			std::cout << std::setw(10) << f_name << '|';
		else
			std::cout << (f_name.substr(0, 9) += '.') << '|';
		if (l_name.length() <= 10)
			std::cout << std::setw(10) << l_name << '|';
		else
			std::cout << (l_name.substr(0, 9) += '.') << '|';
		if (nickname.length() <= 10)
			std::cout << std::setw(10) << nickname << '|' << std::endl;
		else
			std::cout << (nickname.substr(0, 9) += '.') << '|' << std::endl;
		i++;
	}
	
	while (1)
	{	
		std::cout << "Index: ";
		if (std::cin >> index)
		{
			if (index >= 0 && index < count)
				break;
			else
				std::cout << "Index out of range. Try again." << std::endl;
		}
		else
		{
			std::cout << "Invalid input. Try again." << std::endl;
			std::cin.clear();
			std::cin.ignore(1000000, '\n');
		}
	}
	
	std::cout 	<< "Contact information:" << std::endl
		 		<< "   First name: " << contacts[index].getFirstName() << std::endl
		 		<< "   Last name: " << contacts[index].getLastName() << std::endl
		 		<< "   Nickname: " << contacts[index].getNickname() << std::endl
		 		<< "   Phone number: " << contacts[index].getPhoneNumber() << std::endl
		 		<< "   Darkest secret: " << contacts[index].getDarkSecret() << std::endl;
	std::cin.ignore(1000000, '\n');
	return ;
}