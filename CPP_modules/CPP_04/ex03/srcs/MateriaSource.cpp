/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:56:51 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/25 01:37:22 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.h"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->_learnt[i] = NULL;
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete this->_learnt[i];
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	*this = other;
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other) {
	if (this == &other)
		return (*this);
	for(int i = 0; i < 4; i++) {
		if (this->_learnt[i])
			delete this->_learnt[i];
		this->_learnt[i] = other._learnt[i]->clone();
	}
	return(*this);
}

void MateriaSource::learnMateria(AMateria* materia) {
	int i = 0;
	
	for(i = 0; i < 4; i++) {
		if(this->_learnt[i] == NULL) {
			this->_learnt[i] = materia;
			std::cout << "Learnt " << materia->getType() <<std::endl;
			break;
		}
	}
	if (i == 4) {
		std::cout << "Max materia learnt" << std::endl;
		delete materia;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type){
	int i = 0;
	
	for(i = 0; i < 4; i++) {
		if(this->_learnt[i]) {
			if (this->_learnt[i]->getType() == type)
				return (this->_learnt[i]->clone());
		}
	}
	if (i == 4)
		std::cout << "Invalid type " << type <<std::endl;
	return (NULL);
}