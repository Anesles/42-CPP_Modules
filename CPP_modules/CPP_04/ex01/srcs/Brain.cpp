/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:31:59 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/21 19:00:47 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

Brain::Brain(){
    std::cout << "Brain constructor called.\n";
}

Brain::~Brain(){
    std::cout << "Brain destructor called.\n";
}

Brain::Brain(const Brain &src){
    std::cout << "Brain copy constructor called.\n";
    *this = src;
}

Brain& Brain::operator=(const Brain &src){
    std::cout << "Brain copy assignment called.\n";
    for (int i = 0; i < 100; i++){
        this->ideas[i] = src.ideas[i];
    }
    return (*this);
}