/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:30:24 by brumarti          #+#    #+#             */
/*   Updated: 2024/04/09 16:48:02 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.h"
# include "AMateria.h"

class MateriaSource : public IMateriaSource {
	private:
		AMateria* _learnt[4];
	public:
		MateriaSource();
		~MateriaSource();

		MateriaSource(const MateriaSource &src);
		MateriaSource& operator=(const MateriaSource& other);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const &type);
};

#endif