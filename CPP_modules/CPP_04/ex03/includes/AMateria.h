/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:35:13 by brumarti          #+#    #+#             */
/*   Updated: 2024/04/09 17:43:41 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include "ICharacter.h"
# include <iostream>
# include <string>

class AMateria {
	protected:
		std::string _type;
	public:
		AMateria();
		virtual ~AMateria();
		
		AMateria(AMateria const & src);
		AMateria& operator=(const AMateria &other);
		
		AMateria(std::string const & type);

		std::string const & getType() const; //Retruns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif