#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>
#include "Arme.h"

class Personnage
{
public:

	Personnage();
	Personnage(std::string name, std::string nomArme, int degatsArme);
	Personnage(std::string name);
	Personnage(std::string nomArme, int degatsArme);
	~Personnage();
	void reciveDeg(int nbDegats);
	void attack(Personnage& cible);
	void drinkPopo(int quantitePotion);
	void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
	bool estVivant();
	void afficherEtat();

private:

	int m_vie;
	int m_mana;
	std::string m_name;
	Arme m_arme;
};

#endif
