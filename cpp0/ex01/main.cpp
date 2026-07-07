/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 11:52:15 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/07/07 11:23:02 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "contact-list.hpp"

Phonebook	add_contact(Phonebook contact, int i)
{
	int phone;
	std::string information_user[5];

	information_user[0] = "first_name";
	information_user[1] = "last_name";
	information_user[2] = "nickname";
	information_user[3] = "phone_number";
	information_user[4] = "darkest_secret";
	for (int i = 0; i < 5; i++)
	{
		std::cout << information_user[i] << ": ";
		std::cin >> information_user[i];
		if(!information_user[i].c_str())
		{
			std::cout << "empty fields, retry" << std::endl;
			return(contact);
		}
		if(i == 3)
			phone = atoi(information_user[i].c_str());
	}
	contact.m_contact[i].addContacts(information_user[0], information_user[1], information_user[2], phone, information_user[4]);
	return(contact);
}
void good_display(std::string answer)
{
	int size;

	size = answer.size();
	// std::cout << "size answer: " << size;
	std::cout << '|';
	if(size < 10)
	{
		for (int i = 0; i < 10 - size; i++)
			std::cout << ' ';
		std::cout << answer;
		// std::cout << "nb_espace:" << 10 - size;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << answer[i];
		std::cout << '.';
	}
}
void search_contact(Phonebook contact, int nb_contact)
{
	int index;
	std::string to_find;
	std::cout << "     index|";
	std::cout << "first name|";
	std::cout << " last name|";
	std::cout << " nickname" << std::endl;
	for (int i = 0; i < nb_contact; i++)
	{
		std::cout << "         " << i;
		good_display(contact.m_contact[i].getFirst_name());
		good_display(contact.m_contact[i].getLast_name());
		good_display(contact.m_contact[i].getNickname());
		std::cout << std::endl;
	}
	std::cout << "select contact with the index:";
	std::cin >> index;
	if(index >= nb_contact)
		std::cout << "invalid index:" << std::endl;
	else
	{
		std::cout << "Last name: " << contact.m_contact[index].getFirst_name() << std::endl;
		std::cout << "Last name: " << contact.m_contact[index].getLast_name()<< std::endl;
		std::cout << "Nickname: " << contact.m_contact[index].getNickname() << std::endl;
		std::cout << "Phone number: " << contact.m_contact[index].getPhone_number() << std::endl;
		std::cout << "Darkest_secret: " << contact.m_contact[index].getDarkest_secret() << std::endl;
	}
}


int main(void)
{
	int nb_contact;
	Phonebook contact;
	std::string input_user;

	nb_contact = 0;
	while (1)
	{
		std::cout << "command:";
		std::cin >> input_user;
		if(input_user == "ADD")
		{
			contact = add_contact(contact, nb_contact);
			if (nb_contact < 8)
				nb_contact++;
		}
		else if(input_user == "SEARCH")
			search_contact(contact, nb_contact);
		else if(input_user == "EXIT")
			break;
		else
			std::cout << "write a good command!" << std::endl;
	}
	



}