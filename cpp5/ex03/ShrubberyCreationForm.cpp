/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:39:52 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/18 15:53:07 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"
//Form Canonical
ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreation", 145, 137), _target("unknow")
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): AForm("ShrubberyCreation", 145, 137)
{
	*this = src;
}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	if (this != &src){
		if (src.getSigned())
			setSigned();
		_target = src._target;
	}
	return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
//Other
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 145, 137), _target(target)
{}

void ShrubberyCreationForm::executeAction(void) const
{
	std::string file_name;
	file_name = _target + "_shrubbery";
	std::ofstream ofs(file_name.c_str());
	if (!ofs.is_open())
		throw std::runtime_error("could not create shrubbery file");

ofs  << "       *\n"
	<< "      ***\n"
	<< "     *****\n"
	<< "    *******\n"
	<< "       |\n";

	ofs.close();
}