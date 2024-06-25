/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:43:31 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/25 01:45:43 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int subject_main()
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    delete j;
    delete i;

    return 0;
}

int test_main()
{
    Dog a;
    Dog b;

    a.getBrain()->ideas[0] = "Dog.";

    b = a;

    Dog c(a);

    std::cout << "a's idea: " << a.getBrain()->ideas[0] << std::endl;
    std::cout << "b's idea: " << b.getBrain()->ideas[0] << std::endl;
    std::cout << "c's idea: " << c.getBrain()->ideas[0] << std::endl;

    return 0;
}

int main()
{
    std::cout << "Subject main:\n";
    subject_main();

    std::cout << "\nTest main:\n";
    test_main();
}