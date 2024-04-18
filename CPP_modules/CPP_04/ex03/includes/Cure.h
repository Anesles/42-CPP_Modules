/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:01:01 by brumarti          #+#    #+#             */
/*   Updated: 2024/04/18 15:39:49 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.h"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		
		Cure(Cure const & src);
		Cure& operator=(Cure const &other);
	
		AMateria* clone() const;
		void use(ICharacter& target);
};



#endif