/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:14:10 by brumarti          #+#    #+#             */
/*   Updated: 2024/05/10 14:40:11 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.h"
# include "AMateria.h"

class Character : public ICharacter {
	private:
		std::string	_name;
		AMateria* 	_inventory[4];
		AMateria*	_floor[512];
	public:
		Character();
		Character(std::string name);
		~Character();

		Character(const Character & src);
		Character& operator=(const Character &other);

		std::string const & getName() const;
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);
};

		
#endif