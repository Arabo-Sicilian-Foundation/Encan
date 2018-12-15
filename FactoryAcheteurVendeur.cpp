#include "FactoryAcheteurVendeur.h"
#include <random>
#include <functional>


Acheteur* FactoryAcheteurVendeur::createAcheteur()
{
	Acheteur* acheteur[5] = {
		new Acheteur(1, "David",100,Acheteur::FORT,ObjetEncan::SERVICE),
		new Acheteur(2,"Remis",50,Acheteur::LENT,ObjetEncan::ART),
		new Acheteur(3,"Jean",200,Acheteur::MOYEN,ObjetEncan::SERVICE),
		new Acheteur(4,"Josh",30,Acheteur::TRESFORT,ObjetEncan::ART),
		new Acheteur(5,"Jeremi",150,Acheteur::TRESLENT,ObjetEncan::ANTIQUITE)
	};
	return acheteur[static_cast<int>(5 * rand() - 1 / RAND_MAX)];
}

template <class T>
Vendeurs<T>* FactoryAcheteurVendeur::createVendeurs()
{
	return new Vendeurs<T>(T::callFactory(T::getNomDuProgrammeursAimantCeTypeDObjet()));
}
