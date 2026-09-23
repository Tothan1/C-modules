/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:10:23 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/16 16:57:36 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex03.hpp"
//Form Canonical
AMateria::AMateria(): _type("no_type")
{}
AMateria::AMateria(AMateria const & src)
{
	this->_type = src._type;
}
AMateria & AMateria::operator=(AMateria const & src)
{
	if(this == &src)
		return(*this);
	this->_type = src._type;
	return *this;
}
AMateria::~AMateria()
{}
//Other
std::string const & AMateria::getType() const //Returns the materia type
{
	return(_type);
}
void AMateria::use(ICharacter& target)
{
	(void) target;
}