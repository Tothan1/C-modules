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
	_nb_adress = 0;
}
MateriaSource::MateriaSource(MateriaSource const & src)
{
	for(int i = 0; i < 4; i++)
	{
		this->_slots[i] = NULL;
		if(src._slots[i])
			this->_slots[i] = src._slots[i]->clone();
	}
	_nb_materia= src._nb_materia;
	_nb_adress= src._nb_adress;
}
MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
	if(this == &src)
		return *this;
	for(int i = 0; i < 4; i++)
	{
		if(this->_slots[i])
			delete this->_slots[i];
		this->_slots[i] = NULL;
		if(src._slots[i])
			this->_slots[i] = src._slots[i]->clone();
	}
	_nb_materia= src._nb_materia;
	return *this;
}
MateriaSource::~MateriaSource()
{
	for(int i = 0; i < _nb_materia; i++)
		delete _slots[i];
	for(int i = 0; i < _nb_adress; i++)
		delete _adress_saved[i];
}
//Other
void MateriaSource::learnMateria(AMateria* src)
{
	if(_nb_materia != 4)
	{
		_slots[_nb_materia] = src ;
		_nb_materia++;
	}
	else
	{
		_nb_adress++;
		_adress_saved[_nb_adress - 1] = src;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _nb_materia; i++)
	{
		if(_slots[i] != NULL && _slots[i]->getType() == type)
			return (_slots[i]->clone());
	}
	return NULL;
}

