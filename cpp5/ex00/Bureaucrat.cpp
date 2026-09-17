/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:45:18 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/17 18:27:27 by tle-rhun         ###   ########.fr       */
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

//Other
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

std::string Bureaucrat::getName()
{
	return _name;
}
int Bureaucrat::getGrade()
{
	return _grade;
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
