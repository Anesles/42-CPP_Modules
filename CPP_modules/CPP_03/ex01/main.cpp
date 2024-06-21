/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:42:56 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/20 19:21:01 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

int	main(void) {
	ScavTrap C1;
	ScavTrap C2("Zezao");
	ScavTrap C3(C2);
	ScavTrap C4 = C1;
	ClapTrap C5("Zezato");
	ClapTrap C6("Porra");
	int	i = 0;
	
	C5.attack("Zezao");
	while (i < 10) {
		C1.attack("Zezinho");
		i++;
	}

	C1.guardGate();
}