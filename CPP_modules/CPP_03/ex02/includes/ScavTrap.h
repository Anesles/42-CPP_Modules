/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:46:34 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/21 18:01:21 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.h"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap& src);
		ScavTrap &operator=(const ScavTrap& src);
		void attack(const std::string& target);
		void guardGate();
};

#endif // !SCAVTRAP_H

