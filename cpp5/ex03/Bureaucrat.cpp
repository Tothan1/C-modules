/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:45:18 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/18 11:43:04 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


//Form Canonical
Bureaucrat::Bureaucrat() : _name("default_name"), _grade(75)
{}
Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	this->_grade = src._grade;
	return *this;
}


Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
}
//Attribute
std::string Bureaucrat::getName() const
{
	return _name;
}
int Bureaucrat::getGrade() const
{
	return _grade;
}
//Other
void  Bureaucrat::signForm(AForm & src)
{
	try
	{
		src.beSigned(*this);
		std::cout <<this->_name<<" signed "<< src.getName()<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout <<this->_name<<" couldn’t sign "<< src.getName()<< " because " << e.what() << std::endl;
	}
}

void Bureaucrat::incrementGrade()
{
	if(_grade -1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade --;
}
void Bureaucrat::decrementGrade()
{
	if(_grade  + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade ++;
}

char const * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException";
}
char const * Bureaucrat::GradeTooHighException::what()const throw()
{
	return "GradeTooHighException";
}

std::ostream& operator<<(std::ostream& flux, Bureaucrat & src)
{
	flux << src.getName() << ", bureaucrat grade "<< src.getGrade() <<std::endl;
	return flux;
}



void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name <<" executed "<< form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		if(!form.getSigned())
			std::cerr << this->_name <<" don't executed "<< form.getName() << " because the form are no't signed!" << std::endl;
		else
			std::cerr << this->_name <<" don't executed "<< form.getName() << " because the grade required for execute the form are " << form.getRequiredExecute() << std::endl;
	}
	
}