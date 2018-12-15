#pragma once
#include "ObjetGenerique.h"
#include "ObjetEncan.h"
#include "CaracService.h"

class Service
{
public:
	~Service()
	{
	};

	std::shared_ptr<ObjetGenerique> getObjectGenerique() { return std::make_shared<ObjetGenerique>(carac, objEnc); }
	static Service* callFactory();

	friend class FactoryBetS;

private:


	std::shared_ptr<ObjetEncan> objEnc;
	CaracService carac;

	Service(int frais, int tarif, TypeSer type, int xp, std::string nomVendeur, std::shared_ptr<ObjetEncan> obj)
	{
		carac.setFrais(frais);
		carac.setExperience(xp);
		carac.setTarif(tarif);
		carac.setType(type);
		carac.setVendeur(nomVendeur);
		objEnc = obj;
	}
};
