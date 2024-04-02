/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:52:14 by brumarti          #+#    #+#             */
/*   Updated: 2024/04/02 17:21:37 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

#include <string>
#include <iostream>

class AAnimal {
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal &src);
		AAnimal&operator=(const AAnimal &src);

		std::string getType() const;
		
		virtual void makeSound() const = 0;
	protected:
		std::string type;
};

#endif