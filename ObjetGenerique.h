#pragma once

#include "ObjetEncan.h"
#include "CaracAntiquite.h"
#include "CaracArt.h"
#include "CaracService.h"

class ObjetGenerique
{
public:
	ObjetGenerique();
	ObjetGenerique(CaracAntiquite carac, ObjetEncan objEnc);
	ObjetGenerique(CaracArt carac, ObjetEncan objEnc);
	ObjetGenerique(CaracService carac, ObjetEncan objEnc);

	~ObjetGenerique();

	ObjetEncan getObjEncan() const { return objEncan; }
	std::string getInfo();
	std::string getNomVendeur() const { return nomVendeur; }
	TypeObjet::typeObjet getType() const { return type; }

private:
	int frais;
	int experience;
	int tarif;
	TypeService::typeService typeService;
	EtatAntiquite::etatAntiquite etatAntiquite;
	Periode::periode periode;
	int valeur;
	int renomee;
	int volume;
	TypeArt::typeArt typeArt;
	std::string description;
	std::string nomVendeur;
	TypeObjet::typeObjet type;
	ObjetEncan objEncan;
};