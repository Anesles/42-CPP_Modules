/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:10:24 by brumarti          #+#    #+#             */
/*   Updated: 2023/12/05 16:11:48 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.h"

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB();
	void	attack(void);
	void	setWeapon(Weapon weapon);
	Weapon	getWeapon(void);
private:
	std::string	_name;
	Weapon		_weapon;
};
