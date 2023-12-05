/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:04:11 by brumarti          #+#    #+#             */
/*   Updated: 2023/12/05 16:08:32 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.h"

class HumanA
{
public:
	HumanA(std::string name, Weapon weapon);
	~HumanA();
	void	attack(void);
private:
	std::string	_name;
	Weapon		_weapon;
};

