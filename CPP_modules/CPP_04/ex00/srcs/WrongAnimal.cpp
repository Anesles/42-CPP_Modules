/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:54:37 by brumarti          #+#    #+#             */
/*   Updated: 2024/03/19 16:53:05 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal(){
	this->type = "default";
	std::cout << "Called constructor for WrongAnimal.\n";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Called destructor for WrongAnimal.\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src){
	this->type = src.type;
	std::cout << "Copy assignment for WrongAnimal.\n";
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
	this->type = src.type;
	std::cout << "Copy constructor for WrongAnimal.\n";
}

std::string WrongAnimal::getType() const {
	return (this->type);
}

void WrongAnimal::makeSound() const {
	std::cout << "Random WrongAnimal sound.\n";
}