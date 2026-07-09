/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 11:52:15 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/09 16:16:56 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "contact-list.hpp"

int main(void)
{
	Phonebook contact;
	std::string input_user;

	while (1)
	{
		std::cout << "command:";
		getline(std::cin, input_user);
		if(std::cin.eof())
			break;
		if(input_user == "ADD")
			contact.addContact();
		else if(input_user == "SEARCH")
			contact.searchContact();
		else if(input_user == "EXIT")
			break;
		else
			std::cout << "write a good command!" << std::endl;
	}
	



}