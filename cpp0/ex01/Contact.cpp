# include "contact-list.hpp"
void Contacts::addContacts(std::string first_name, std::string last_name, std::string nickname, int phone_number, std::string darkest_secret)
{
	m_first_name = first_name;
	m_last_name = last_name;
	m_nickname = nickname;
	m_phone_number = phone_number;
	m_darkest_secret = darkest_secret;
	// std::cout << "enter" << std::endl;
}
std::string Contacts::getFirst_name()
{
	return(m_first_name);
}
std::string Contacts::getLast_name()
{
	return(m_last_name);
}
std::string Contacts::getNickname()
{
	return(m_nickname);
}
int Contacts::getPhone_number()
{
	return(m_phone_number);
}

std::string Contacts::getDarkest_secret()
{
	return(m_darkest_secret);
}