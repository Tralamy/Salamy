#include <Windows.h>
#include "Personnage.h"


using namespace std;




Personnage::Personnage() : m_name("Monster"), m_vie(100), m_mana(100){}
Personnage::Personnage(string name) : m_name(name), m_vie(100), m_mana(100) {}
Personnage::Personnage(string nomArme, int degatsArme) : m_name("Monster"), m_vie(100), m_mana(100), m_arme(nomArme, degatsArme) {}
Personnage::Personnage(string name,string nomArme, int degatsArme) : m_name(name), m_vie(100), m_mana(100), m_arme(nomArme, degatsArme) {}

Personnage::~Personnage() {}

void Personnage::reciveDeg(int nbDegats)
{
	m_vie -= nbDegats;

	if (m_vie < 0)
	{
		m_vie = 0;
	}
}

void Personnage::attack(Personnage& cible)
{
	cible.reciveDeg(m_arme.getDegats());
	Sleep(3200);
	cout << m_name << " attack " << cible.m_name  << " ! ";
	Sleep(3200);
	cout << cible.m_name << " have know: " << cible.m_vie << " PV !" << endl;
}

void Personnage::drinkPopo(int quantitePotion)
{
	m_vie += quantitePotion;
	int vie(m_vie + quantitePotion);

	if (m_vie > 100)
	{
		vie = 100;
		m_vie = 100;
	}
	Sleep(3200);
	cout << m_name << " drink a PoPo and he have know: " << m_vie << " PV !" << endl;
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
	m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
	Sleep(3200);
	cout << m_name << " change gun and have know: " << nomNouvelleArme << "! This gun do " << degatsNouvelleArme << " deg !" << endl;
}

bool Personnage::estVivant()
{
	if (m_vie > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	cout << m_name << " die !" << endl;
}

void Personnage::afficherEtat()
{
	cout << "Name: " << m_name << endl;
	cout << "Life: " << m_vie << endl;
	cout << "Mana: " << m_mana << endl;
	m_arme.afficher();
}
