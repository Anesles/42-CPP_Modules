/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:41:10 by brumarti          #+#    #+#             */
/*   Updated: 2024/03/19 16:48:48 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Called constructor for dog.\n";
}

Dog::~Dog() {
    std::cout << "Called destructor for dog.\n";
}

Dog::Dog(const Dog& src) {
    this->type = src.type;
    std::cout << "Copy constructor for dog.\n";
}

Dog& Dog::operator=(const Dog& src) {
    this->type = src.type;
    std::cout << "Copy assignment for dog.\n";
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Dog goes woof woof.\n";
}