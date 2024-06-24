/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:52:14 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/24 23:40:53 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>
#include <iostream>

class Animal {
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &src);
		Animal&operator=(const Animal &src);

		std::string getType() const;
		void setType(std::string type);
		
		virtual void makeSound() const;
	protected:
		std::string type;
};

#endif