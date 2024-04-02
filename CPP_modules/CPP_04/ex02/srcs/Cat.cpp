/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:41:07 by brumarti          #+#    #+#             */
/*   Updated: 2024/04/02 15:45:34 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat() {
    this->brain = new Brain();
    this->type = "Cat";
    std::cout << "Called constructor for cat.\n";
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "Called destructor for cat.\n";
}

Cat::Cat(const Cat& src) {
    this->type = src.type;
    this->brain = src.brain;
    std::cout << "Copy constructor for cat.\n";
}

Cat& Cat::operator=(const Cat& src) {
    this->type = src.type;
    this->brain = src.brain;
    std::cout << "Copy assignment for cat.\n";
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Cat goes meow meow.\n";
}