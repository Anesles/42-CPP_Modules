/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:54:37 by brumarti          #+#    #+#             */
/*   Updated: 2024/04/02 17:22:27 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.h"

AAnimal::AAnimal(){
	this->type = "default";
	std::cout << "Called constructor for animal.\n";
}

AAnimal::~AAnimal() {
	std::cout << "Called destructor for animal.\n";
}

AAnimal& AAnimal::operator=(const AAnimal& src){
	this->type = src.type;
	std::cout << "Copy assignment for animal.\n";
	return (*this);
}

AAnimal::AAnimal(const AAnimal& src) {
	this->type = src.type;
	std::cout << "Copy constructor for animal.\n";
}

std::string AAnimal::getType() const {
	return (this->type);
}

void AAnimal::makeSound() const {
	std::cout << "Random animal sound.\n";
}