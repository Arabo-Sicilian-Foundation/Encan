#pragma once
#include <string>
#include "ObjetGenerique.h"
#include "ObjetEncan.h"
#include "CaracAntiquite.h"
#include "TypeAnt.h"

class Antiquite
{
public:
	~Antiquite()
	{
	}

	std::shared_ptr<ObjetGenerique> getObjectGenerique() { return std::make_shared<ObjetGenerique>(carac, objEnc); }
	static Antiquite* callFactory();

	friend class FactoryBetS;
private:

	//Antiquite(ObjetGenerique::Periode periode, int valeur, ObjetEncan* obj) :Antiquite("Inconnue", ObjetGenerique::NEUF, periode, valeur, obj) {}
	//Antiquite() :Antiquite("Inconnue", ObjetGenerique::NEUF, ObjetGenerique::INCONNUE, 50) {}

	//std::string Description[5] = { "Sculpture d'homme", "Armure rupestre", "Instrument de musique", "Coffre magique", "Inconnue" };

	std::shared_ptr<ObjetEncan> objEnc;

	CaracAntiquite carac;

	Antiquite(std::string description, StructEtat etat_, Periode periode, int valeur, std::string nomVendeur,
		std::shared_ptr<ObjetEncan> obj)
	{
		carac.setDescription(description);
		carac.setEtat(etat_);
		carac.setPeriode(periode);
		carac.setValeur(valeur);
		carac.setVendeur(nomVendeur);
		objEnc = obj;
	}
};
