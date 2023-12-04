/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:44:30 by brumarti          #+#    #+#             */
/*   Updated: 2023/10/03 19:52:11 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
    public:
        void    announce(void);
        //Contructor
        Zombie(void);
        //Destructor
        ~Zombie(void);
        //Getters
        std::string getName(void);
        //Setters
        void    setName(std::string name);
    private:
        std::string _name;
};

Zombie* zombieHorde(int N, std::string name);