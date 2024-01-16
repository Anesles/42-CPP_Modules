/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:34:49 by brumarti          #+#    #+#             */
/*   Updated: 2024/01/16 17:40:53 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap() : ScavTrap(){
	this->_hitp = 100;
	this->_enep = 100;
	this->_atad = 30;
	std::cout << "FragTrap " << this->_name << " created !\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " destroyed !\n";
}

FragTrap::FragTrap(const std::string name) : ScavTrap(name) {
	this->_hitp = 100;
	this->_enep = 100;
	this->_atad = 30;
	std::cout << "FragTrap " << this->_name << " created using name!\n";
}

FragTrap::FragTrap(const FragTrap &src) : ScavTrap(src){
	std::cout << "FragTrap " << this->_name << " created using copy constructor!\n";
}

FragTrap &FragTrap::operator=(const FragTrap &src) {
	this->_name = src._name;
	this->_hitp = src._hitp;
	this->_enep = src._enep;
	this->_atad = src._atad;
	std::cout << "FragTrap " << this->_name << " created using copy assignment!\n";
	return (*this);
}

void FragTrap::highFiveGuys(void) {
	std::cout << "FragTrap " << this->_name << " is requesting a high-five !\n";
}