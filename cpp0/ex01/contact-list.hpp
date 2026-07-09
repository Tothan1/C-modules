/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact-list.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:43:27 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/09 16:42:42 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include <stdlib.h>
#include <sstream>

class Contacts
{
	public:
	void addContacts(std::string first_name, std::string last_name, std::string nickname, int phone_number, std::string darkest_secret);
	
	std::string getFirst_name();
	std::string getLast_name();
	std::string getNickname();
	int getPhone_number();
	std::string getDarkest_secret();

	private:
	std::string m_first_name;
	std::string m_last_name;
	std::string m_nickname;

	int m_phone_number;
	std::string m_darkest_secret;
};


class Phonebook
{
	public:
	Phonebook();
	void addContact();
	void goodDisplay(std::string answer);
	void searchContact();
	int getNb_contact();
	
	private:
	Contacts m_contact[8];
	int nb_contact;
	int current_index;
};