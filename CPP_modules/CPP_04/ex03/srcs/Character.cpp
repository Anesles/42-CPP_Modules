/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:25:43 by brumarti          #+#    #+#             */
/*   Updated: 2024/05/10 14:53:06 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.h"

Character::Character() : _name("Romeu"){
	int i = 0;
	for (i = 0; i < 4; i++){
		this->_inventory[i] = 0;
	}
	for (i = 0; i < 512; i++){
		this->_floor[i] = 0;
	}
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name) {
	int i = 0;
	for (i = 0; i < 4; i++){
		this->_inventory[i] = 0;
	}
	for (i = 0; i < 512; i++){
		this->_floor[i] = 0;
	}
	std::cout << "Character name constructor called" << std::endl;
}

Character::~Character() {
	int i = 0;
	while (this->_inventory[i]) {
		delete this->_inventory[i];
		i++;
	}
	i = 0;
	while(this->_floor[i]) {
		delete this->_floor[i];
		i++;
	}
	std::cout << "Character destructor called" << std::endl;
}

Character::Character(const Character &src){
	this->_name = src._name;
	
	for(int i = 0; i < 4; i++) {
		if (!src._inventory[i])
			this->_inventory[i] = NULL;
		else
			this->_inventory[i] = src._inventory[i]->clone();
	}
	for(int j = 0; src._floor[j]; j++) {
		if (!src._floor[j])
			this->_floor[j] = NULL;
		else
			this->_floor[j] = src._floor[j]->clone();
	}
	std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character &other) {
	this->_name = other._name;
	
	for(int i = 0; i < 4; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	for(int j = 0; j < 512; j++) {
		if (this->_floor[j])
			delete this->_floor[j];
		if (other._floor[j])
			this->_floor[j] = other._floor[j]->clone();
		else
			this->_floor[j] = NULL;
	}
	std::cout << "Character copy assignement called" << std::endl;
	return(*this);
}

std::string const & Character::getName() const{
	return (this->_name);
}

void Character::equip(AMateria* m) {
	int i = 0;
	for (i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			return ;
		}
	} 
	if (i == 4)
		std::cout << "Inventory is full";
}

void Character::unequip(int idx){
	int i = 0;
	if (idx >= 0 && idx < 4) {
		while(this->_floor[i])
			i++;
		if (i < 512) {
			this->_floor[i] =  this->_inventory[idx];
			this->_inventory[idx] = NULL;
		} else
			std::cout << "Daam, the floor is full" << std::endl;
	} else
		std::cout << "The index is out of range" << std::endl;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx]) {
		this->_inventory[idx]->use(target);
	}
}