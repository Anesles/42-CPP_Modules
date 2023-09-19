/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:59:59 by brumarti          #+#    #+#             */
/*   Updated: 2023/09/19 16:15:31 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string new_fname)
{
	first_name = new_fname;
}

void	Contact::setLastName(std::string new_lname)
{
	last_name = new_lname;
}

void	Contact::setNickname(std::string new_nick)
{
	nickname = new_nick;
}

void	Contact::setPhoneNumber(std::string new_number)
{
	phone_number = new_number;
}

void	Contact::setDarkSecret(std::string new_dsecret)
{
	dark_secret = new_dsecret;	
}

std::string	Contact::getFirstName(void)
{
	return first_name;
}

std::string	Contact::getLastName(void)
{
	return last_name;
}
std::string	Contact::getNickname(void)
{
	return nickname;
}

std::string	Contact::getPhoneNumber(void)
{
	return phone_number;
}

std::string	Contact::getDarkSecret(void)
{
	return dark_secret;
}
