/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:41:10 by brumarti          #+#    #+#             */
/*   Updated: 2024/04/02 15:48:34 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog() {
    this->brain = new Brain();
    this->type = "Dog";
    std::cout << "Called constructor for dog.\n";
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "Called destructor for dog.\n";
}

Dog::Dog(const Dog& src) {
    this->type = src.type;
    this->brain = src.brain;
    std::cout << "Copy constructor for dog.\n";
}

Dog& Dog::operator=(const Dog& src) {
    this->type = src.type;
    this->brain = src.brain;
    std::cout << "Copy assignment for dog.\n";
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Dog goes woof woof.\n";
}