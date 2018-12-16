#pragma once
#include "ObjetGenerique.h"

class Service
{
public:
	~Service()
	{
	}; 

	std::shared_ptr<ObjetGenerique> getObjectGenerique() { return std::make_shared<ObjetGenerique>(carac, objEnc); }
	static Service* callFactory();

	friend class FactoryBetS;

	Service(int frais, int tarif, TypeService::typeService type, int xp, std::string nomVendeur, std::shared_ptr<ObjetEnVente> obj)
	{
		carac.setFrais(frais);
		carac.setExperience(xp);
		carac.setTarif(tarif);
		carac.setType(type);
		carac.setVendeur(nomVendeur);
		objEnc = obj;
	}

private:

	std::shared_ptr<ObjetEnVente> objEnc;
	CaracService carac;


};
