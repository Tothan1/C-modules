/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 16:14:17 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/17 18:39:13 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
//Form Canonical
Form::Form() :_name("no_name"), _signed(false), _required_sign(150), _required_execute(150)
{
}
Form::Form(Form const & src): _required_sign(src._required_sign), _required_execute(src._required_execute)
{
	*this = src;
}
Form & Form::operator=(Form const & src)
{
	this->_signed = src._signed;
	return *this;
}
Form::~Form()
{
}

//Accessor Attribute
const std::string Form::getName()
{
	return _name;
}
bool Form::getSigned()
{
	return _signed;
}
int Form::getRequiredSign()
{
	return _required_sign;
}
int Form::getRequiredExecute()
{
	return _required_execute;
}
//Other
void Form::beSigned(Bureaucrat & src)
{
	if (src.getGrade()<= this->_required_sign )
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}
Form::Form(std::string name, const int required_sign, const int required_execute) : _name(name), _signed(false), _required_sign(required_sign), _required_execute(required_execute)
{
	CheckGrade(required_sign);
	CheckGrade(required_execute);
}

void Form::CheckGrade(int grade)
{
	if(grade > 150)
		throw Form::GradeTooLowException();
	else if(grade < 1)
		throw Form::GradeTooHighException();
}


//Execption
char const * Form::GradeTooLowException::what() const throw()
{
	return "Form execption Grade is Too Low";
}
char const * Form::GradeTooHighException::what()const throw()
{
	return "Form execption Grade is Too High";
}

std::ostream& operator<<(std::ostream& flux, Form & src)
{
	flux << "Form: " << std::endl;
	flux << "name: "<< src.getName() << std::endl;
	flux << "it's signed: "<< src.getSigned() << std::endl;
	flux << "required_sign: "<< src.getRequiredSign() << std::endl;
	flux << "required_execute: "<< src.getRequiredExecute() << std::endl;
	return flux;
}