/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:52:14 by brumarti          #+#    #+#             */
/*   Updated: 2024/03/19 16:58:40 by brumarti         ###   ########.fr       */
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
		
		virtual void makeSound() const;
	protected:
		std::string type;
};

#endif