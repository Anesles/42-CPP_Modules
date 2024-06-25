/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:30:24 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/25 01:05:49 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <string>
#include <iostream>

class Brain{
    public:
        Brain();
        ~Brain();
        Brain(const Brain &src);
        Brain&operator=(const Brain &src);
        std::string ideas[100];
};


#endif