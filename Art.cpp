#include "Art.h"
#include "FactoryObjet.h"

Art::Art(int renomee, int valeur, int volume, TypeArt::typeArt type, std::string description, std::string nomVendeur, std::shared_ptr<ObjetEnVente> obj)
{
	carac.setDescription(description);
	carac.setType(type);
	carac.setRenomee(renomee);
	carac.setValeur(valeur);
	carac.setVendeur(nomVendeur);
	objEnVente = obj;
}

Art::~Art()
{
};

std::shared_ptr<Art> Art::callFactory()
{
	return FactoryObjet::creeArt();
}
