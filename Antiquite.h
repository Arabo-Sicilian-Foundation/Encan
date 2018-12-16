#pragma once
#include "AdapterObjet.h"

class Antiquite
{
public:

	~Antiquite();
	 
	std::shared_ptr<AdapterObjet> getObjet() { return std::make_shared<AdapterObjet>(carac, objEnVente); }
	static Antiquite* callFactory();

	friend class FactoryObjet;


private:
	Antiquite(std::string description, EtatAntiquite::etatAntiquite etat_, Periode::periode periode, int valeur, std::string nomVendeur, std::shared_ptr<ObjetEnVente> obj);

	std::shared_ptr<ObjetEnVente> objEnVente;

	CaracAntiquite carac;

};
