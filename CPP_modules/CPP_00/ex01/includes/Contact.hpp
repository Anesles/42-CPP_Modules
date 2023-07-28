/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:05:08 by brumarti          #+#    #+#             */
/*   Updated: 2023/07/28 16:02:32 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	public:
		void	setFirstName(std::string);
		void	setLastName(std::string);
		void	setNickname(std::string);
		void	setPhoneNumber(int);
		void	setDarkSecret(std::string);

		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		int			getPhoneNumber(void);
		std::string	getDarkSecret(void);

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int			phone_number;
		std::string	dark_secret;
};

#endif