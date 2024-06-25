/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:41:10 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/25 01:15:17 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog()
{
    this->brain = new Brain();
    this->type = "Dog";
    std::cout << "Called constructor for dog.\n";
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Called destructor for dog.\n";
}

Dog::Dog(const Dog &src) : AAnimal(src)
{
    this->type = src.type;
    this->brain = new Brain(*src.brain);
    std::cout << "Copy constructor for dog.\n";
}

Dog &Dog::operator=(const Dog &src)
{
    if (this == &src)
        return (*this);
    this->type = src.type;
    delete this->brain;
    this->brain = new Brain(*src.brain);
    std::cout << "Copy assignment for dog.\n";
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog goes woof woof.\n";
}

Brain *Dog::getBrain() const
{
    return this->brain;
}