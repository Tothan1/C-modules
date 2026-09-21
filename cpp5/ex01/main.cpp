/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:41:50 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/21 11:47:55 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
int main (void)
{
	try
	{
		Form fasf("tyty", 253, 61);
		std::cout << fasf;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat tyty("tyty", 61);
		std::cout << tyty;
		Form fasf("tyty", 60, 61);
		std::cout << fasf;
		tyty.signForm(fasf);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat toto("toto", 60);
		Form pass("tata", 60, 61);
		std::cout << pass;
		toto.signForm(pass);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}