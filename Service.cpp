#include "Service.h"
#include "FactoryObjet.h"

Service::Service(int frais, int tarif, TypeService::typeService type, int xp, std::string nomVendeur, std::shared_ptr<ObjetEnVente> obj)
{
	carac.setFrais(frais);
	carac.setExperience(xp);
	carac.setTarif(tarif);
	carac.setType(type);
	carac.setVendeur(nomVendeur);
	objEnVente = obj;
}

Service::~Service()
{
}

Service* Service::callFactory()
{
	return FactoryObjet::creeService();
}
