/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:54:37 by brumarti          #+#    #+#             */
/*   Updated: 2024/01/16 17:59:27 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal(){
	this->type = "default";
	std::cout << "Called constructor for animal with type " << this->type << ".\n";
}

Animal::~Animal() {
	std::cout << "Called destructor for animal with type " << this->type << ".\n";
}

Animal& Animal::operator=(const Animal& src){
	this->type = src.type;
	std::cout << "Copy assignment for animal with type " << this->type << ".\n";
	return (*this);
}

Animal::Animal(const Animal& src) {
	std::cout << "Copy constructor for animal with type " << this->type << ".\n";
}