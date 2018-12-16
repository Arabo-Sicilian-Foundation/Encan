#pragma once
#include "AdapterObjet.h"

class Art
{
public:
	~Art()
	{
	};

	std::shared_ptr<AdapterObjet> getObjectGenerique() { return std::make_shared<AdapterObjet>(carac, objEnc); }
	static Art* callFactory();

	friend class FactoryBetS;

	Art(int renomee, int valeur, int volume, TypeArt::typeArt type, std::string description, std::string nomVendeur,std::shared_ptr<ObjetEnVente> obj)
	{
		carac.setDescription(description);
		carac.setType(type);
		carac.setRenomee(renomee);
		carac.setValeur(valeur);
		carac.setVendeur(nomVendeur);
		objEnc = obj;
	};

private:
	std::shared_ptr<ObjetEnVente> objEnc;

	CaracArt carac;
};
