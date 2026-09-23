/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:45:15 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/18 10:54:23 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include "AForm.hpp"

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;
public:
	//Form Canonical
	Bureaucrat();
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat & operator=(Bureaucrat const & src);
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	//Attribute
	std::string getName() const;
	int getGrade() const;
	//Other
	void incrementGrade();
	void	decrementGrade();
	class GradeTooHighException : public std::exception 
		{
		char const* what() const throw();		
		};
		
	class GradeTooLowException : public std::exception 
		{
		char const* what() const throw();		
		};
	void signForm(AForm & src);
	void executeForm(AForm const & form);
};
std::ostream& operator<<(std::ostream& flux, Bureaucrat & src);
#endif


