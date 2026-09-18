/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:41:50 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/18 11:44:10 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>
int main (void)
{

	std::cout << "--------------Invalid grade for form for signed--------------" << std::endl;
	try
	{
		Bureaucrat toto("toto", 26);
		PresidentialPardonForm pass("target1");
		std::cout << toto;
		std::cout << pass;
		toto.signForm(pass);
		toto.executeForm(pass);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat toto("toto", 73);
		RobotomyRequestForm pass("target2");
		std::cout << toto;
		std::cout << pass;
		toto.signForm(pass);
		toto.executeForm(pass);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat toto("toto", 146);
		ShrubberyCreationForm pass("target3");
		std::cout << toto;
		std::cout << pass;
		toto.signForm(pass);
		toto.executeForm(pass);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	std::cout << "--------------Invalid grade for form for execute--------------" << std::endl;
	try
	{
		Bureaucrat toto("toto", 6);
		PresidentialPardonForm pass("target1");
		std::cout << toto;
		std::cout << pass;
		toto.signForm(pass);
		toto.executeForm(pass);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat toto("toto", 46);
		RobotomyRequestForm pass("target2");
		std::cout << toto;
		std::cout << pass;
		toto.signForm(pass);
		toto.executeForm(pass);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat toto("toto", 138);
		ShrubberyCreationForm pass("target3");
		std::cout << toto;
		std::cout << pass;
		toto.signForm(pass);
		toto.executeForm(pass);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	std::cout << "--------------the form are not signed--------------" << std::endl;
	try
	{
		Bureaucrat toto("toto", 5);
		PresidentialPardonForm pass("target1");
		std::cout << toto;
		std::cout << pass;
		toto.executeForm(pass);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat toto("toto", 45);
		RobotomyRequestForm pass("target2");
		std::cout << toto;
		std::cout << pass;
		toto.executeForm(pass);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat toto("toto", 137);
		ShrubberyCreationForm pass("target3");
		std::cout << toto;
		std::cout << pass;
		toto.executeForm(pass);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	std::cout << "--------------It's working--------------" << std::endl;
try
	{
		Bureaucrat toto("toto", 5);
		PresidentialPardonForm pass("target1");
		std::cout << toto;
		std::cout << pass;
		toto.signForm(pass);
		toto.executeForm(pass);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat toto("toto", 45);
		RobotomyRequestForm pass("target2");
		std::cout << toto;
		std::cout << pass;
		toto.signForm(pass);
		toto.executeForm(pass);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat toto("toto", 137);
		ShrubberyCreationForm pass("target3");
		std::cout << toto;
		std::cout << pass;
		toto.signForm(pass);
		toto.executeForm(pass);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}