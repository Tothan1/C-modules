/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:48:03 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/16 10:48:43 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

//Form canonical
MateriaSource::MateriaSource()
{
	_nb_materia = 0;
}
MateriaSource::MateriaSource(MateriaSource const & src)
{

}
MateriaSource & operator=(MateriaSource const & src)
{

}
~MateriaSource::MateriaSource()
{
	for(int i = 0; i < _nb_materia; i++)
		delete _slots[i];
}
//Other
virtual void MateriaSource::learnMateria(AMateria* src)
{
	if(_nb_materia != 5)
	{
		_slots[_nb_materia] = src ;
		_nb_materia++;
	}
}

virtual AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _nb_materia; i++)
	{
		if(_slots[i].getType() == type)
			return (_slots[i]);
	}
	else
		return 0;
}

