/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:41:07 by brumarti          #+#    #+#             */
/*   Updated: 2024/03/19 16:55:22 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"

WrongCat::WrongCat() {
    this->type = "WrongCat";
    std::cout << "Called constructor for WrongCat.\n";
}

WrongCat::~WrongCat() {
    std::cout << "Called destructor for WrongCat.\n";
}

WrongCat::WrongCat(const WrongCat& src) {
    this->type = src.type;
    std::cout << "Copy constructor for WrongCat.\n";
}

WrongCat& WrongCat::operator=(const WrongCat& src) {
    this->type = src.type;
    std::cout << "Copy assignment for WrongCat.\n";
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat goes meow meow.\n";
}