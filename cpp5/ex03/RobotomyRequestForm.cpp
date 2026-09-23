/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:39:52 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/17 19:36:42 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include "RobotomyRequestForm.hpp"
//Form Canonical
RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequest", 72, 45), _target("unknow")
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): AForm("RobotomyRequest", 72, 45)
{
	*this = src;
}
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	if (this != &src){
		if (src.getSigned())
			setSigned();
		_target = src._target;
	}
	return *this;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}
//Other
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequest", 72, 45), _target(target)
{}

void RobotomyRequestForm::executeAction(void) const
{
	int valeur;
	srand(time(NULL));
	valeur = rand();
	std::cout << "Prrr"<<std::endl;
	if(valeur%2 == 0)
		std::cout << _target <<"has been robotomized"<< std::endl;
	else
		std::cout << _target <<"the robotomy failed"<< std::endl;
}