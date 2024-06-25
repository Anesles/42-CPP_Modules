/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:25:43 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/25 01:36:39 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.h"

Character::Character() : _name("Romeu")
{
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
	for (i = 0; i < 512; i++)
	{
		this->_floor[i] = 0;
	}
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
	for (i = 0; i < 512; i++)
	{
		this->_floor[i] = 0;
	}
	std::cout << "Character name constructor called" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = 0;
		}
	}
	for (int i = 0; this->_floor[i] && i < 512; i++)
	{
		delete this->_floor[i];
		this->_floor[i] = 0;
	}
	std::cout << "Character destructor called" << std::endl;
}

Character::Character(const Character &src)
{
	this->_name = src._name;

	for (int i = 0; i < 4; i++)
	{
		if (!src._inventory[i])
			this->_inventory[i] = NULL;
		else
			this->_inventory[i] = src._inventory[i]->clone();
	}
	for (int j = 0; src._floor[j]; j++)
	{
		if (!src._floor[j])
			this->_floor[j] = NULL;
		else
			this->_floor[j] = src._floor[j]->clone();
	}
	std::cout << "Character copy constructor called" << std::endl;
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
			{
				delete this->_inventory[i];
				this->_inventory[i] = 0;
			}
		}
		for (int i = 0; i < 512; i++)
		{
			if (this->_floor[i])
			{
				delete this->_floor[i];
				this->_floor[i] = 0;
			}
		}
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			this->_inventory[i] = other._inventory[i] ? other._inventory[i]->clone() : 0;
		}
		for (int i = 0; i < 512; i++)
		{
			this->_floor[i] = other._floor[i] ? other._floor[i]->clone() : 0;
		}
	}
	std::cout << "Character copy assignment called" << std::endl;
	return *this;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return;
		}
	}
	if (i == 4) {
		std::cout << "Inventory is full";
		delete m;
	}
}

void Character::unequip(int idx)
{
	int i = 0;
	if (idx >= 0 && idx < 4)
	{
		while (this->_floor[i])
			i++;
		if (i < 512)
		{
			this->_floor[i] = this->_inventory[idx];
			this->_inventory[idx] = NULL;
		}
		else
			std::cout << "Daam, the floor is full" << std::endl;
	}
	else
		std::cout << "The index is out of range" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
	}
}