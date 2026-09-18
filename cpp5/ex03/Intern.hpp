/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:39:59 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/17 19:32:18 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"

class Intern
{
private:
	AForm * Form1(std::string target);
	AForm * Form2(std::string target);
	AForm * Form3(std::string target);
public:
//Form Canonical
	Intern();
	Intern(Intern const & src);
	Intern & operator=(Intern const & src);
	~Intern();
//Other
	AForm * makeForm( std::string _form_name, std::string _form_target);
	std::string cleanName(std::string name);
//Exeption
	class InternException : public std::exception 
		{
		char const * what() const throw();		
		};
};

