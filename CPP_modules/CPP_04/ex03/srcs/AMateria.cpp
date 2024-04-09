/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:49:39 by brumarti          #+#    #+#             */
/*   Updated: 2024/04/09 17:44:46 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.h"

AMateria::AMateria() : _type("") {
	std::cout << "Materia constructor called" << std::endl;
}

AMateria::~AMateria(){
	std::cout << "Materia destructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src) {
	*this = src;
	std::cout << "Materia copy constructor called" << std::endl; 
}

AMateria::AMateria(std::string const & type) : _type(type){
	std::cout << "Materia type constructor called" << std::endl;
}

std::string const & AMateria::getType() const{
	return this->_type;
}

AMateria& AMateria::operator=(const AMateria &other) {
	this->_type = other._type;
	std::cout << "Materia copy assignement called" << std::endl;
}