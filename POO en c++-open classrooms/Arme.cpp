#include "Arme.hpp"

Arme::Arme()
{
    m_nom = "Epee rouillee";
    m_degats = 10;
}
Arme::Arme(std::string nom, int degats)
{
	m_nom = nom;
	m_degats = degats;
}


int	Arme::getDegats()
{
	return m_degats;
}
void Arme::changer(std::string nom, int degats)
{
	m_nom = nom;
	m_degats = degats;
}

void Arme::afficher() const
{
	std::cout<< "Nom de l'arme: " << m_nom;
	std::cout<<"Dégats de l'arme: " << m_degats;
}