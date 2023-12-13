/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:29:29 by brumarti          #+#    #+#             */
/*   Updated: 2023/12/13 19:36:40 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.h"

HumanB::HumanB(std::string name) : name(name)
{
	std::cout << "HumanB " << this->name << " created" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this->name << " destroyed" << std::endl;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	std::cout << "HumanB " << this->name << " set weapon " << weapon.getType() << std::endl;
	this->_weapon = &weapon;
}