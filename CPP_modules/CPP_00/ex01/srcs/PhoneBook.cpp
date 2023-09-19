/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:59:53 by brumarti          #+#    #+#             */
/*   Updated: 2023/09/19 17:13:16 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

using std::string;
using std::cin;
using std::cout;
using std::endl;

string	read_string(string ask_str)
{
	string	input;

	while (1)
	{
		cout << ask_str;
		getline(cin, input);
		if (!input.empty())
			break;
		else
			cout << "Empty string, try again !\n";
	}
	return (input);	
}

PhoneBook::PhoneBook()
{
	index = 0;
	count = 0;
}

void	PhoneBook::addContact()
{
	Contact		new_contact;
	string	temp;

	temp = read_string("First name: ");
	new_contact.setFirstName(temp);
	temp = read_string("Last name: ");
	new_contact.setLastName(temp);
	temp = read_string("Nickname: ");
	new_contact.setNickname(temp);
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
	int	i = 0;
	int	index = -1;
	string	f_name;
	string	l_name;
	string  nickname;
	
	cout << std::setw(45) << std::setfill('-') << '-' << std::setfill(' ') << endl
		 << "|" << std::setw(10) << "Index" << "|"
		 << std::setw(10) << "First Name" << "|"
		 << std::setw(10) << "Last Name" << "|"
		 << std::setw(10) << "Nickname" << "|" << endl;
	while (i < count)
	{
		cout << '|' << std::setw(10) << i << '|';
		f_name = contacts[i].getFirstName();
		l_name = contacts[i].getLastName();
		nickname = contacts[i].getNickname();
		if (f_name.length() <= 10)
			cout << std::setw(10) << f_name << '|';
		else
			cout << (f_name.substr(0, 9) += '.') << '|';
		if (l_name.length() <= 10)
			cout << std::setw(10) << l_name << '|';
		else
			cout << (l_name.substr(0, 9) += '.') << '|';
		if (nickname.length() <= 10)
			cout << std::setw(10) << nickname << '|' << endl;
		else
			cout << (nickname.substr(0, 9) += '.') << '|' << endl;
		i++;
	}
	
	while (1)
	{	
		cout << "Index: ";
		cin >> index;
		cin.clear();
		cin.ignore();
		if (index >= count || index < 0)
			cout << "Index overflow, try again." << endl;
		else
			break;
	}
	cout << "Contact information:" << endl
		 << "   First name: " << contacts[index].getFirstName() << endl
		 << "   Last name: " << contacts[index].getLastName() << endl
		 << "   Nickname: " << contacts[index].getNickname() << endl
		 << "   Phone number: " << contacts[index].getPhoneNumber() << endl
		 << "   Darkest secret: " << contacts[index].getDarkSecret() << endl;
	
	return ;
}