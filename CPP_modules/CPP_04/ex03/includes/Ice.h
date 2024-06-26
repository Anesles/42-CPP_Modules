/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:44:39 by brumarti          #+#    #+#             */
/*   Updated: 2024/04/18 15:52:12 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.h"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		
		Ice(Ice const & src);
		Ice& operator=(Ice const &other);
	
		AMateria* clone() const;
		void use(ICharacter& target);
};



#endif