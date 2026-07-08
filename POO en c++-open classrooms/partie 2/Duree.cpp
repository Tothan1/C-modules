# include "Duree.hpp"

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
};

bool Duree::estEgal(Duree const& b) const
{
	if (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes)
		return true;
	else
		return false;

}

Duree Duree::addition(Duree const& b) const
{
	Duree resultat;

	resultat.m_heures= m_heures + b.m_heures;
	resultat.m_minutes= m_minutes + b.m_minutes;
	resultat.m_secondes= m_secondes + b.m_secondes;
	return resultat;
}

bool operator==(Duree const& a, Duree const& b)
{
	return a.estEgal(b);
}

Duree operator+(Duree const& a, Duree const& b)
{
	Duree resultat;

	return a.addition(b);
}