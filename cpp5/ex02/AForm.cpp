/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 16:14:17 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/17 18:19:55 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
//Form Canonical
AForm::AForm() :_name("no_name"), _signed(false), _required_sign(150), _required_execute(150)
{
}
AForm::AForm(AForm const & src): _required_sign(src._required_sign), _required_execute(src._required_execute)
{
	*this = src;
}
AForm & AForm::operator=(AForm const & src)
{
	this->_signed = src._signed;
	return *this;
}
AForm::~AForm()
{
}

//Accessor Attribute
const std::string AForm::getName()const
{
	return _name;
}
bool AForm::getSigned()const
{
	return _signed;
}
int AForm::getRequiredSign()const
{
	return _required_sign;
}
int AForm::getRequiredExecute()const
{
	return _required_execute;
}
//Other
void AForm::beSigned(Bureaucrat & src)
{
	if (src.getGrade()<= this->_required_sign )
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}
AForm::AForm(std::string name, const int required_sign, const int required_execute) : _name(name), _signed(false), _required_sign(required_sign), _required_execute(required_execute)
{
	CheckGrade(required_sign);
	CheckGrade(required_execute);
}

void AForm::CheckGrade(int grade)
{
	if(grade > 150)
		throw AForm::GradeTooLowException();
	else if(grade < 1)
		throw AForm::GradeTooHighException();
}
void AForm::setSigned()
{
	_signed = true;
}
void AForm::execute(Bureaucrat const & executor) const
{
	if(!_signed || executor.getGrade() > this->getRequiredExecute())
		throw Bureaucrat::GradeTooLowException();
	else
		executeAction();
}

//Execption
char const * AForm::GradeTooLowException::what() const throw()
{
	return "AForm execption Grade is Too Low";
}
char const * AForm::GradeTooHighException::what()const throw()
{
	return "AForm execption Grade is Too High";
}

std::ostream& operator<<(std::ostream& flux, AForm & src)
{
	flux << "AForm: " << std::endl;
	flux << "name: "<< src.getName() << std::endl;
	flux << "it's signed: "<< src.getSigned() << std::endl;
	flux << "required_sign: "<< src.getRequiredSign() << std::endl;
	flux << "required_execute: "<< src.getRequiredExecute() << std::endl;
	return flux;
}