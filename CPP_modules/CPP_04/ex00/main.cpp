/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:43:31 by brumarti          #+#    #+#             */
/*   Updated: 2024/03/19 17:00:10 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int main()
{
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    
    dog->makeSound(); //will output the cat sound!
    cat->makeSound();
    meta->makeSound();

    delete meta;
    delete dog;
    delete cat;

    std::cout << "----------WrongCat----------" << std::endl;
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound(); //will output the random sound
    
    delete wrongCat;

    return 0;
}