/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
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

class AForm
{
private:
	std::string _name;
	bool _signed;
	int _required_sign;
	int _required_execute;
	virtual void executeAction(void) const = 0;
public:
//Form Canonical
	AForm();
	AForm(AForm const & src);
	AForm & operator=(AForm const & src);
	virtual ~AForm();
//Attribute
	const std::string getName()const;
	bool getSigned()const;
	int getRequiredSign()const;
	int getRequiredExecute()const;
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
	AForm(std::string name, const int required_sign, const int required_execute);
	void beSigned(Bureaucrat & src);
	void CheckGrade(int grade);
	void execute(Bureaucrat const & executor) const;
	void setSigned();
};
std::ostream& operator<<(std::ostream& flux, AForm & src);
#endif

