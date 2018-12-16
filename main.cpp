#include <iostream>
#include <time.h>
#include <thread>
#include "Art.h"
#include "Service.h"
#include "Antiquite.h"
#include "FactoryAcheteurVendeur.h"


void genVendeurAcheteur(std::list<Acheteur*> listeAcheteur, std::list<Vendeurs<Art>*> listeVendeurArt, std::list<Vendeurs<Service>*> listeVendeurService, std::list<Vendeurs<Antiquite>*> listeVendeurAntiquite)
{
	for (int i = 0; i < 5; i++)
	{
		listeVendeurArt.push_back(FactoryAcheteurVendeur::createVendeurs<Art>());
		listeVendeurService.push_back(FactoryAcheteurVendeur::createVendeurs<Service>());
		listeVendeurAntiquite.push_back(FactoryAcheteurVendeur::createVendeurs<Antiquite>());
		listeAcheteur.push_back(FactoryAcheteurVendeur::createAcheteur());
	}
}

int main()
{
	srand(time(NULL));

	std::list<Vendeurs<Art>*> listeVendeurArt;
	std::list<Acheteur*> listeAcheteur;
	std::list<Vendeurs<Service>*> listeVendeurService;
	std::list<Vendeurs<Antiquite>*> listeVendeurAntiquite;

	genVendeurAcheteur(listeAcheteur, listeVendeurArt, listeVendeurService, listeVendeurAntiquite);

	return 0;
}