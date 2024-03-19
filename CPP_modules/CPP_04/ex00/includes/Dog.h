/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:40:20 by brumarti          #+#    #+#             */
/*   Updated: 2024/03/19 16:48:19 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.h"

class Dog : public Animal {
    public:
        Dog();
        ~Dog();
        Dog(const Dog &src);
        Dog&operator=(const Dog &src);
        void makeSound() const;
};

#endif