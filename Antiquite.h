#pragma once
#include "AdapterObjet.h"

class Antiquite
{
public:
	~Antiquite()
	{
	}
	 
	std::shared_ptr<AdapterObjet> getObjectGenerique() { return std::make_shared<AdapterObjet>(carac, objEnc); }
	static Antiquite* callFactory();

	friend class FactoryBetS;

	Antiquite(std::string description, EtatAntiquite::etatAntiquite etat_, Periode::periode periode, int valeur, std::string nomVendeur, std::shared_ptr<ObjetEnVente> obj)
	{
		carac.setDescription(description);
		carac.setEtat(etat_);
		carac.setPeriode(periode);
		carac.setValeur(valeur);
		carac.setVendeur(nomVendeur);
		objEnc = obj;
	}
private:

	std::shared_ptr<ObjetEnVente> objEnc;

	CaracAntiquite carac;

};
