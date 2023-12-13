/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:29:54 by brumarti          #+#    #+#             */
/*   Updated: 2023/12/13 19:37:49 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.h"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon created with type " << this->_type << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon " << this->_type << " destroyed" << std::endl;
}

const std::string& Weapon::getType(void)
{
	const std::string &ref = this->_type;
	return (ref);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}