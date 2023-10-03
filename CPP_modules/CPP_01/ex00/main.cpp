/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:43:12 by brumarti          #+#    #+#             */
/*   Updated: 2023/10/03 19:48:20 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *a, b, c;

    a = newZombie("Bruno");
    a->announce();
    delete a;

    b.setName("Rui");
    b.announce();
    
    c.setName("Joana");
    c.announce();

    randomChump("Francisco");
    return (0);
}