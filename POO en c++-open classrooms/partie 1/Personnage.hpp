#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

# include <iostream>
# include "Arme.hpp"

class Personnage
{
	// Méthodes
	public:

	Personnage(); //Constructeur
	Personnage(std::string nomArme, int degatsArme); //Constructeur
	void recevoirDegats(int nbDegats);
	void afficherEtat() const;
	void attaquer(Personnage &cible);
	void boirePotionDeVie(int quantitePotion);
	void changerArme(std::string nom, int degats);
	bool estVivant() const;

	private:
	// Attributs
	int m_vie;
	int m_mana;
	Arme m_arme;
};

#endif