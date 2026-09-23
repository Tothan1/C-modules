/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 16:14:17 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/17 18:08:54 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H
#include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int _required_sign;
	const int _required_execute;
public:
//Form Canonical
	Form();
	Form(Form const & src);
	Form & operator=(Form const & src);
	~Form();
//Attribute
	const std::string getName();
	bool getSigned();
	int getRequiredSign();
	int getRequiredExecute();
//Execption
	class GradeTooHighException : public std::exception 
		{
		char const* what() const throw();		
		};
		
	class GradeTooLowException : public std::exception 
		{
		char const* what() const throw();		
		};
//Other
	Form(std::string name, const int required_sign, const int required_execute);
	void beSigned(Bureaucrat & src);
	void CheckGrade(int grade);
};
std::ostream& operator<<(std::ostream& flux, Form & src);
#endif

