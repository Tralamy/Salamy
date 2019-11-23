/*
Samy ajoute un nom au perso !
ET des cout pour les PV ETC !
*/

#include <iostream>
#include <string>
#include <stdlib.h> 
#include "Personnage.h"
#include <cstdlib>

using namespace std;


int main()
{
	Personnage Samy("Samy","Sword of the big life DEMON", 80), Elyas("Elyas");

	// FIGHT

	Elyas.attack(Samy); // Samy 90 PV
	Samy.drinkPopo(9); // Samy 99 PV
	Samy.attack(Elyas); // Elyas 20 PV
	Elyas.drinkPopo(30); // Elyas 50 PV
	Samy.changerArme("Infinity",100); // Samy ONESHOT
	Elyas.attack(Samy); // Samy 89
	Elyas.changerArme("Sword of the big life DEMON", 80); // Elyas FAIT MAL !
	Elyas.attack(Samy); // Samy 9 PV
	Samy.attack(Elyas);

	// Stats

	cout << "Stats:" << endl << endl;
	cout << "Samy ->" << endl;
	Samy.afficherEtat();
	cout << endl;
	cout << "Elyas ->" << endl;
	Elyas.afficherEtat();

	system("pause");
	return 0;
}
