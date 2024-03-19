/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:38:12 by brumarti          #+#    #+#             */
/*   Updated: 2024/03/19 16:54:28 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &src);
        WrongCat&operator=(const WrongCat &src);
        void makeSound() const;
};

#endif