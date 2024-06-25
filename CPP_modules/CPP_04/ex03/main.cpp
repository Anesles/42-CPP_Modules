/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:34:58 by brumarti          #+#    #+#             */
/*   Updated: 2024/06/25 01:19:19 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.h"
#include "Ice.h"
#include "Cure.h"
#include "Character.h"

int subject_main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter *me = new Character("me");
	
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter *bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	return 0;
}

void	testCharacter(void)
{
	ICharacter	*pedro = new Character("Pedro");
	ICharacter	*ivan = new Character("Ivan");
	AMateria	*ice = new Ice();

	/* Filling Pedro's inventory */
	pedro->equip(new Ice());
	pedro->equip(ice);
	pedro->equip(new Ice());
	pedro->equip(new Cure());
	pedro->equip(new Cure()); // Over filling Pedro's inventory
	/* Filling Ivan's inventory */
	ivan->equip(new Cure());
	ivan->equip(new Cure());
	ivan->equip(new Ice());

	/* Using materias */
	pedro->use(0, *ivan);
	pedro->use(1, *ivan);
	pedro->use(3, *ivan);
	ivan->use(2, *pedro);

	/* Unequiping materia and use empty slot */
	pedro->unequip(1);
	pedro->use(1, *ivan);

	/* Equiping new materia and use the filled slot */
	pedro->equip(new Cure());
	pedro->use(1, *ivan);

	delete pedro;
	delete ivan;
	delete ice;
}

void	testMateriaSource()
{
	IMateriaSource	*materiaSource = new MateriaSource();
	ICharacter		*pedro = new Character("Pedro");
	ICharacter		*brandon = new Character("Brandon");
	
	/* Learning new materias */
	materiaSource->learnMateria(new Ice());
	materiaSource->learnMateria(new Cure());
	materiaSource->learnMateria(new Cure());
	materiaSource->learnMateria(new Cure());
	materiaSource->learnMateria(new Cure()); // Over learning items

	/* Equiping learnt materias */
	pedro->equip(materiaSource->createMateria("cure"));
	pedro->equip(materiaSource->createMateria("cure"));
	pedro->equip(materiaSource->createMateria("ice"));
	pedro->equip(materiaSource->createMateria("ice"));
	pedro->equip(materiaSource->createMateria("cure")); // Over filling Pedro's inventory

	/* Use against Brandon */
	pedro->use(0, *brandon);
	pedro->use(2, *brandon);
	
	delete materiaSource;
	delete pedro;
	delete brandon;
}

int main()
{
	std::cout << "Subject main:\n";
	subject_main();

	std::cout << "\nTest Character:\n";
	testCharacter();

	std::cout << "\nTest MateriaSource:\n";
	testMateriaSource();
	return 0;
}