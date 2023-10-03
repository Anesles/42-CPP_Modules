/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:53:25 by brumarti          #+#    #+#             */
/*   Updated: 2023/10/03 19:57:18 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int n = 35;
    Zombie *horde = zombieHorde(n, "Jorge");

    for (int i = 0; i < n ; i++)
        horde[i].announce();
}