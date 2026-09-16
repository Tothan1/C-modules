/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:30:55 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/16 15:49:53 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character: public ICharacter
{
	private:
	int _nb_materia;
	std::string _name;
	AMateria * _slots[4];
	public:
	//Form canonical
	Character();
	Character(Character const & src);
	Character & operator=(Character const & src);
	~Character();
	//Other
	Character(std::string name);
	//Interface
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};
#endif