/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:54:37 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/24 22:54:45 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal() {
	this->type = "default";
	std::cout << "Called constructor for animal.\n";
}

Animal::~Animal() {
	std::cout << "Called destructor for animal.\n";
}

Animal& Animal::operator=(const Animal& src){
	this->type = src.type;
	std::cout << "Copy assignment for animal.\n";
	return (*this);
}

Animal::Animal(const Animal& src) {
	this->type = src.type;
	std::cout << "Copy constructor for animal.\n";
}

std::string Animal::getType() const {
	return (this->type);
}

void Animal::makeSound() const {
	std::cout << "Random animal sound.\n";
}