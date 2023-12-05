/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:01:23 by brumarti          #+#    #+#             */
/*   Updated: 2023/12/05 16:13:44 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon
{
public:
	Weapon(std::string type);
	~Weapon();
	std::string	getType(void);
	void		setType(std::string type);
private:
	std::string	_type;
};
