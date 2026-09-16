/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:23:36 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/15 17:27:42 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"

//Form canonical
Cure::Cure()
{
	type = "cure";
}


Cure::Cure(Cure const & src) : AMateria(src)
{}
Cure & Cure::operator=(Cure const & src)
{
	if(this == &src)
		return(*this);
	_type = src.getType();
	return *this;
}

Cure::~Cure()
{}




Cure* Cure::clone() const
{
	return (new Cure());
}
void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << "’s wounds *"<<std::endl;
}