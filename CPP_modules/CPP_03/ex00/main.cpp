/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:42:56 by brumarti          #+#    #+#             */
/*   Updated: 2024/01/16 16:14:32 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int	main(void) {
	ClapTrap C1;
	ClapTrap C2("Zezao");
	ClapTrap C3(C2);
	ClapTrap C4 = C1;

	C1.attack("Zezao");
	C2.takeDamage(5);
	C3.takeDamage(10);
	C4.takeDamage(5);
	C4.takeDamage(5);
	C4.takeDamage(5);
}