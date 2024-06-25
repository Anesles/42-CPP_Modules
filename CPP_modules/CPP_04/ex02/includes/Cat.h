/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:38:12 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/25 01:05:14 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "AAnimal.h"
#include "Brain.h"

class Cat : public AAnimal
{
public:
    Cat();
    ~Cat();
    Cat(const Cat &src);
    Cat &operator=(const Cat &src);
    void makeSound() const;

    Brain *getBrain() const;

private:
    Brain *brain;
};

#endif