/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:45:27 by brumarti          #+#    #+#             */
/*   Updated: 2024/01/16 17:04:38 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ClapTrap {
	protected:
		std::string	_name;
		int			_hitp;
		int			_enep;
		int			_atad;
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap & src);
		ClapTrap & operator=(const ClapTrap & rhs);
};