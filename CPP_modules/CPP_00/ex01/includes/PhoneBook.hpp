/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:04:32 by brumarti          #+#    #+#             */
/*   Updated: 2023/07/28 16:46:31 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define MAX_CONTACTS 8

class PhoneBook
{
	public:
		PhoneBook();

		void	addContact();
		void	searchContacts();

	private:
		int		count;
		Contact	contacts[MAX_CONTACTS];
};

#endif