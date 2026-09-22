/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:31:35 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/22 10:58:03 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

//Form canonical
Character::Character()
{
	_nb_materia = 0;
	this->_name = "default name";
	for (int i = 0; i < 4; i++)
		_slots[i] = NULL;
}
Character::Character(Character const & src)
{
	this->_name = src._name;
	this->_nb_materia = src._nb_materia;
	for (int i = 0; i < 4; i++)
	{
		this->_slots[i] = NULL;
		if(src._slots[i] != NULL)
			this->_slots[i] = src._slots[i]->clone();
	}
}
Character & Character::operator=(Character const & src)
{
	if(this == &src)
		return(*this);
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		if(this->_slots[i])
			delete this->_slots[i];
		this->_slots[i] = NULL;
		if(src._slots[i])
			this->_slots[i] = src._slots[i]->clone();
	}
	return *this;
}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if(this->_slots[i])
			delete this->_slots[i];
	}
	for(int i = 0; i < (int)_adress_saved.size(); i++)
		delete _adress_saved[i];
}
//Other
Character::Character(std::string name)
{
	_nb_materia = 0;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		_slots[i] = NULL;
}

//Interface
std::string const & Character::getName() const
{
	return _name;
}
void Character::equip(AMateria* m)
{
	int i = 0;
	if(_nb_materia < 4 && m != NULL)
	{
		for (int i = 0; i < 4; i++)
		{
			if(_slots[i] == m)
				return ;
		}
		
		while(i < 4 && _slots[i]!= NULL)
			i++;
		if(_slots[i] == NULL && i < 4)
		{
			_slots[i] = m;
			_nb_materia++;
		}
	}
	else if(m != NULL)
	{
		for(int i = 0; i < (int)_adress_saved.size(); i++)
		{
			if(_adress_saved[i] == m)
				return ;
		}
		_adress_saved.push_back(m);
	}
}
void Character::unequip(int idx)
{
	if(_nb_materia > 0 && _slots[idx] != NULL && idx >= 0 && idx < 4)
	{
		_adress_saved.push_back(_slots[idx]);
		_slots[idx] = NULL;
		_nb_materia--;
	}
}
void Character::use(int idx, ICharacter& target)
{
	if(_nb_materia > 0 && idx >= 0 && idx < 4 && _slots[idx] != NULL)
		_slots[idx]->use(target);
}