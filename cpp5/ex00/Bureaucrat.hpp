/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:45:15 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/17 16:04:50 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
	
};
std::ostream& operator<<(std::ostream& flux, Bureaucrat & src);



