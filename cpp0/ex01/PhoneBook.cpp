# include "contact-list.hpp"

Phonebook::Phonebook()
{
	nb_contact = 0;
}

int Phonebook::getNb_contact()
{
	return nb_contact;
}

void	Phonebook::addContact()
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
			return;
		}
		if(i == 3)
		{
			std::stringstream ss(information_user[i]);
			ss >> phone;
		}
	}
	m_contact[nb_contact].addContacts(information_user[0], information_user[1], information_user[2], phone, information_user[4]);
	nb_contact++;
}

void Phonebook::goodDisplay(std::string answer)
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

void Phonebook::searchContact()
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
		goodDisplay(m_contact[i].getFirst_name());
		goodDisplay(m_contact[i].getLast_name());
		goodDisplay(m_contact[i].getNickname());
		std::cout << std::endl;
	}
	std::cout << "select contact with the index:";
	std::cin >> index;
	if(index >= nb_contact)
		std::cout << "invalid index:" << std::endl;
	else
	{
		std::cout << "Last name: " << m_contact[index].getFirst_name() << std::endl;
		std::cout << "Last name: " << m_contact[index].getLast_name()<< std::endl;
		std::cout << "Nickname: " << m_contact[index].getNickname() << std::endl;
		std::cout << "Phone number: " << m_contact[index].getPhone_number() << std::endl;
		std::cout << "Darkest_secret: " << m_contact[index].getDarkest_secret() << std::endl;
	}
}