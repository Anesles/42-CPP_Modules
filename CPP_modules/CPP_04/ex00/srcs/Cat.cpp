/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:41:07 by brumarti          #+#    #+#             */
/*   Updated: 2024/03/19 16:48:44 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Called constructor for cat.\n";
}

Cat::~Cat() {
    std::cout << "Called destructor for cat.\n";
}

Cat::Cat(const Cat& src) {
    this->type = src.type;
    std::cout << "Copy constructor for cat.\n";
}

Cat& Cat::operator=(const Cat& src) {
    this->type = src.type;
    std::cout << "Copy assignment for cat.\n";
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Cat goes meow meow.\n";
}