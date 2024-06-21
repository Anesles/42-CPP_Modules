/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:26:32 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/21 18:00:38 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.h"

class FragTrap: protected ClapTrap {
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap& src);
		FragTrap&operator=(const FragTrap& src);
		void highFiveGuys(void);
};
#endif // !FRAGTRAP_H
