/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:26:32 by brumarti          #+#    #+#             */
/*   Updated: 2024/01/16 17:41:50 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

class FragTrap : public ScavTrap {
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap& src);
		FragTrap&operator=(const FragTrap& src);
		void highFiveGuys(void);
};