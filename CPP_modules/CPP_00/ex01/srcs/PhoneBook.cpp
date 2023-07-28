/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:59:53 by brumarti          #+#    #+#             */
/*   Updated: 2023/07/28 16:47:23 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

using std::string;
using std::cin;
using std::cout;

PhoneBook::PhoneBook()
{
	count = 0;
}

void	PhoneBook::addContact()
{
	Contact		new_contact;
	string	temp;
	int			number;

	cout << "First name: ";
	getline(cin, temp);
	new_contact.setFirstName(temp);
	cout << "Last name: ";
	getline(cin, temp);
	new_contact.setLastName(temp);
	cout << "Nickname: ";
	getline(cin, temp);
	new_contact.setNickname(temp);
	cout << "Phone number: ";
	cin >> number;
	new_contact.setPhoneNumber(number);
	cout << "Darkest secret: ";
	getline(cin, temp);
	new_contact.setDarkSecret(temp);
	
	contacts[count] = new_contact;
}

void	PhoneBook::searchContacts()
{
	return ;
}