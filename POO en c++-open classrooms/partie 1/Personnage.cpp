#include "Personnage.hpp"
#include "Arme.hpp"

Personnage::Personnage() : m_vie(100), m_mana(100), m_arme("Épée rouillée", 10) 
{
}
Personnage::Personnage(std::string nomArme, int degatsArme) : m_vie(100), m_mana(100), m_arme(nomArme, degatsArme) 
{
}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    //On enlève le nombre de dégâts reçus à la vie du personnage

    if (m_vie < 0) //Pour éviter d'avoir une vie négative
    {
        m_vie = 0; //On met la vie à 0 (cela veut dire mort)
    }
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_arme.getDegats());
    //On inflige à la cible les dégâts que cause notre arme
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;

    if (m_vie > 100) //Interdiction de dépasser 100 de vie
    {
        m_vie = 100;
    }
}

bool Personnage::estVivant() const
{
    return m_vie > 0;
}

void Personnage::changerArme(std::string nom, int degats)
{
    m_arme.changer(nom, degats);
}

void Personnage::afficherEtat() const
{
    std::cout << "Vie : " << m_vie << std::endl;
    std::cout << "Mana : " << m_mana << std::endl;
    m_arme.afficher();
}