#pragma once
#include <string>
#include "ObjetGenerique.h"
#include "ObjetEncan.h"
#include "CaracArt.h"

class Art
{
public:
	~Art()
	{
	};

	std::shared_ptr<ObjetGenerique> getObjectGenerique() { return std::make_shared<ObjetGenerique>(carac, objEnc); }
	static Art* callFactory();

	friend class FactoryBetS;

private:
	Art(int renomee, int valeur, int volume, TypeArt type, std::string description, std::string nomVendeur,
		std::shared_ptr<ObjetEncan> obj)
	{
		carac.setDescription(description);
		carac.setType(type);
		carac.setRenomee(renomee);
		carac.setValeur(valeur);
		carac.setVendeur(nomVendeur);
		objEnc = obj;
	};
	std::shared_ptr<ObjetEncan> objEnc;

	CaracArt carac;
};
