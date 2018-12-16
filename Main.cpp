#include <iostream>
#include <time.h>
#include <thread>
#include "Art.h"
#include "Vendeurs.h"
#include "FactoryAcheteurVendeur.h"


void genVendeurAcheteur(std::list<Acheteur*> listeAcheteur, std::list<Vendeurs<Art>*> listeVendeurArt)
{
	for (int i = 0; i < 5; i++)
	{
		listeVendeurArt.push_back(FactoryAcheteurVendeur::createVendeurs<Art>());
		listeAcheteur.push_back(FactoryAcheteurVendeur::createAcheteur());
	}
}

int main()
{
	srand(time(NULL));

	std::list<Vendeurs<Art>*> listeVendeurArt;
	std::list<Acheteur*> listeAcheteur;

	return 0;
}