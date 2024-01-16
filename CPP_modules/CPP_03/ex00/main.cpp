/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:42:56 by brumarti          #+#    #+#             */
/*   Updated: 2024/01/16 16:24:44 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int	main(void) {
	ClapTrap C1;
	ClapTrap C2("Zezao");
	ClapTrap C3(C2);
	ClapTrap C4 = C1;
	ClapTrap C5("Zezato");
	ClapTrap C6("Porra");
	int	i = 0;
	
	C1.attack("Zezao");
	C2.takeDamage(5);
	C5.takeDamage(10);
	C6.takeDamage(5);
	C6.takeDamage(5);
	C6.takeDamage(5);
	while (i < 10) {
		C1.attack("Zezinho");
		i++;
	}
}