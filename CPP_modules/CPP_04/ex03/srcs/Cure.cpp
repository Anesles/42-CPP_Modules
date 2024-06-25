/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:31:29 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/25 01:24:14 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.h"

Cure::Cure(void) : AMateria("cure") {
	std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria(src) {
	*this = src;
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(Cure const &other) {
	if (this == &other)
		return(*this);
	this->_type = other._type;
	std::cout << "Cure copy assignement called" << std::endl;
	return(*this);
}

AMateria* Cure::clone() const {
	return(new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "Heals " << target.getName() << " wounds" << std::endl;
}