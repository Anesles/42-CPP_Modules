/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:41:07 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/25 01:15:45 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat()
{
    this->brain = new Brain();
    this->type = "Cat";
    std::cout << "Called constructor for cat.\n";
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Called destructor for cat.\n";
}

Cat::Cat(const Cat &src) : AAnimal(src)
{
    this->type = src.type;
    this->brain = new Brain(*src.brain);
    std::cout << "Copy constructor for cat.\n";
}

Cat &Cat::operator=(const Cat &src)
{
    if (this == &src)
        return (*this);
    this->type = src.type;
    this->brain = new Brain(*src.brain);
    std::cout << "Copy assignment for cat.\n";
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat goes meow meow.\n";
}

Brain *Cat::getBrain() const
{
    return this->brain;
}