/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:59:36 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/20 19:35:18 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap() : ClapTrap(){
	this->_hitp = 100;
	this->_enep = 50;
	this->_atad = 20;
	std::cout << "ScavTrap " << this->_name << " created !\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_name << " destroyed !\n";
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	this->_hitp = 100;
	this->_enep = 50;
	this->_atad = 20;
	std::cout << "ScavTrap " << this->_name << " created using name!\n";
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src){
	std::cout << "ScavTrap " << this->_name << " created using copy constructor!\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
	this->_name = src._name;
	this->_hitp = src._hitp;
	this->_enep = src._enep;
	this->_atad = src._atad;
	std::cout << "ScavTrap " << this->_name << " created using copy assignment!\n";
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_hitp > 0 && this->_enep > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_atad << " points of damage!\n";
		this->_enep--;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name;
		if (this->_hitp <= 0)
			std::cout << " has no hipoints left";
		if (this->_hitp <= 0 && this->_enep <= 0)
			std::cout << " and";
		if(this->_enep <= 0)
			std::cout << " has no energy points left";
		std::cout << ".\n";
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode.\n";
}