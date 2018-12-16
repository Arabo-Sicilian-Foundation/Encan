#pragma once
#include "ObjetGenerique.h"

class Antiquite
{
public:
	~Antiquite()
	{
	}
	 
	std::shared_ptr<ObjetGenerique> getObjectGenerique() { return std::make_shared<ObjetGenerique>(carac, objEnc); }
	static Antiquite* callFactory();

	friend class FactoryBetS;

	Antiquite(std::string description, EtatAntiquite::etatAntiquite etat_, Periode::periode periode, int valeur, std::string nomVendeur, std::shared_ptr<ObjetEncan> obj)
	{
		carac.setDescription(description);
		carac.setEtat(etat_);
		carac.setPeriode(periode);
		carac.setValeur(valeur);
		carac.setVendeur(nomVendeur);
		objEnc = obj;
	}
private:

	std::shared_ptr<ObjetEncan> objEnc;

	CaracAntiquite carac;

};
