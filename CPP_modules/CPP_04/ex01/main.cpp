/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:43:31 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/24 23:04:57 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    const Animal* k(j);

    delete j;
    delete i;
    delete k;

    return 0;
}