/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:31:35 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/16 12:22:25 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

//Form canonical
Character::Character()
{
	_nb_materia = 0;
	this->_name = "default name";
}
Character::Character(Character const & src)
{
	this->_name = src._name;
	this->_slots = new AMateria(*src._slots);
}
Character & operator=(Character const & src)
{
	this->_name = src._name;
	delete this->_slots;
	this->_slots = new AMateria(*src._slots);
	return *this;
}
~Character::Character()
{
	delete _slots;
}
//Other
Character::Character(std::string name)
{
	_nb_materia = 0;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		_slots[i] = 0;
}

//Interface
virtual std::string const & getName() const
{
	return _name;
}
virtual void equip(AMateria* m)
{
	if(_nb_materia <= 4)
	{
		for (int i = 0; i <= 4 && _slots[i] != 0; i++)
		{
		}
		if(_slots[i] == 0 && i <= 4)
			_slots[i] = m;
	}
}
virtual void unequip(int idx)
{
	if(_nb_materia > 0 && _slots[idx] != 0)
		_slots[idx] = 0;
}
virtual void use(int idx, ICharacter& target)
{
	if(_nb_materia > 0 && _slots[idx] != 0)
		_slots[idx].AMateria::use(target);

}