/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:45:15 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/17 17:40:53 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;
public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat & operator=(Bureaucrat const & src);
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	std::string getName();
	int getGrade();
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
	void signForm(Form & src);
};
std::ostream& operator<<(std::ostream& flux, Bureaucrat & src);
#endif


