#include "FactoryAcheteurVendeur.h"


Acheteur* FactoryAcheteurVendeur::createAcheteur()
{
	Acheteur* acheteur[5] = {
		new Acheteur(1, "David",100,Acheteur::FORT,TypeObjet::SERVICE),
		new Acheteur(2,"Remis",50,Acheteur::LENT,TypeObjet::ART),
		new Acheteur(3,"Jean",200,Acheteur::MOYEN,TypeObjet::SERVICE),
		new Acheteur(4,"Josh",30,Acheteur::TRESFORT,TypeObjet::ART),
		new Acheteur(5,"Jeremi",150,Acheteur::TRESLENT,TypeObjet::ANTIQUITE)
	};
	return acheteur[static_cast<int>(5 * rand() - 1 / RAND_MAX)];
}

template <class T>
Vendeurs<T>* FactoryAcheteurVendeur::createVendeurs()
{
	return new Vendeurs<T>(T::callFactory());
}
