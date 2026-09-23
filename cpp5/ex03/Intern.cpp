/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:39:52 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/17 19:36:42 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
//Form Canonical
Intern::Intern()
{}

Intern::Intern(Intern const & src)
{
	*this = src;
}
Intern & Intern::operator=(Intern const & src)
{
	(void)src;
	return *this;
}
Intern::~Intern()
{
}
//Other

AForm * Intern::Form1(std::string target)
{
	return(new PresidentialPardonForm(target));
}
AForm * Intern::Form2(std::string target)
{
	return(new RobotomyRequestForm(target));
}
AForm * Intern::Form3(std::string target)
{
	return(new ShrubberyCreationForm(target));
}

char const * Intern::InternException::what() const throw()
{
	return " Intern don't creates form";
}
std::string Intern::cleanName(std::string name)
{
	std::string res;

	for (size_t i = 0; i < name.length(); i++)
	{
		if(!std::isspace(name[i]))
			res+=std::tolower(name[i]);
	}
	return res;
}
AForm * Intern::makeForm( std::string _form_name, std::string _form_target)
{
	std::string goodName;
	AForm *tmp;
	AForm* (Intern::*ptr[3]) (std::string);
	ptr[0] = &Intern::Form1;
	ptr[1] = &Intern::Form2;
	ptr[2] = &Intern::Form3;
	for (int i = 0; i < 3; i++)
	{
		goodName = this->cleanName(_form_name);
		tmp = (this->*ptr[i])(_form_target);
		if(Intern::cleanName(tmp->getName()) == goodName)
		{
			std::cout <<" Intern creates "<< tmp->getName()<< std::endl;
			return (tmp);
		}
		else
			delete tmp;
	}
	throw Intern::InternException();
}