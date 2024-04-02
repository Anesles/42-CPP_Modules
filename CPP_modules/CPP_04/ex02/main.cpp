/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:43:31 by brumarti          #+#    #+#             */
/*   Updated: 2024/04/02 17:26:26 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"
#include "Cat.h"

int main() {
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    return 0;
}