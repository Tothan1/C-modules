/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 16:43:02 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/10 16:59:27 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main (void)
{
	std::string st ="HI THIS IS BRAIN";
	std::string *stringPTR = &st;
	std::string &stringREF = st;

	std::cout << "The memory address of the string variable:" << &st << std::endl;
	std::cout << "The memory address held by stringPTR:" << &stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable:" << st << std::endl;
	std::cout << "The value pointed to by stringPTR:" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF:" << stringREF << std::endl;
}