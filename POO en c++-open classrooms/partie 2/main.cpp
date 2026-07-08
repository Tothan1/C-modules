# include "Duree.hpp"

int main(void)
{
	Duree resultat, duree1(0,10,28), duree2(0,10,28);
	
	/* if(duree1 == duree2)
		std::cout<< "Les deux durée sont égales" << std::endl;
	else
		std::cout<< "Les deux durée sont inégales" << std::endl; */
	resultat = duree1 + duree2;
	std::cout << resultat.m_heures << std::endl;
	std::cout << resultat.m_minutes << std::endl;
	std::cout << resultat.m_secondes << std::endl;
	return 0;
}