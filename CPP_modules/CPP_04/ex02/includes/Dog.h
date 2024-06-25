/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:40:20 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/25 01:05:25 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "AAnimal.h"
#include "Brain.h"

class Dog : public AAnimal
{
public:
    Dog();
    ~Dog();
    Dog(const Dog &src);
    Dog &operator=(const Dog &src);
    void makeSound() const;

    Brain *getBrain() const;
private:
    Brain *brain;
};

#endif