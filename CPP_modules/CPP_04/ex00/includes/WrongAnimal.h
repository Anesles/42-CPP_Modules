/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:52:14 by brumarti          #+#    #+#             */
/*   Updated: 2024/03/19 16:52:13 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <string>
#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal&operator=(const WrongAnimal &src);

		std::string getType() const;
		
		void makeSound() const;
	protected:
		std::string type;
};

#endif