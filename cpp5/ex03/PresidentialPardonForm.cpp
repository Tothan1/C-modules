/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:39:52 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/17 19:36:42 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
//Form Canonical
PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardon", 25, 5), _target("unknow")
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): AForm("PresidentialPardon", 25, 5)
{
	*this = src;
}
PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	if (this != &src){
		if (src.getSigned())
			setSigned();
		_target = src._target;
	}
	return *this;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}
//Other
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5), _target(target)
{}

void PresidentialPardonForm::executeAction(void) const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}