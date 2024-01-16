/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:52:14 by brumarti          #+#    #+#             */
/*   Updated: 2024/01/16 17:56:26 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Animal {
	public:
		Animal();
		~Animal();
		Animal(const Animal &src);
		Animal&operator=(const Animal &src);
	protected:
		std::string type;
};