/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 16:09:26 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/22 18:39:40 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	
	//Check use equipment with index overload
	me->use(6, *bob);
	//ADD test
	me->equip(tmp); // add for test same ptr on _slots
	//Check the overload sloats
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	//Check the incorrect materia
	tmp = src->createMateria("fire");
	//Check the unequip same sloats
	me->unequip(4);
	me->unequip(4);
	//Check the unequip all sloats
	me->unequip(3);
	me->unequip(2);
	me->unequip(1);
	me->unequip(0);
	//Check use equipment empty
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	

	delete bob;
	delete me;
	delete src;
}