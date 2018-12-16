#pragma once

#include "ObjetEnVente.h"
#include "CaracAntiquite.h"
#include "CaracArt.h"
#include "CaracService.h"

class AdapterObjet
{
public:
	AdapterObjet();
	AdapterObjet(CaracAntiquite carac, std::shared_ptr<ObjetEnVente> objEnc);
	AdapterObjet(CaracArt carac, std::shared_ptr<ObjetEnVente> objEnc);
	AdapterObjet(CaracService carac, std::shared_ptr<ObjetEnVente> objEnc);

	~AdapterObjet();

	std::shared_ptr<ObjetEnVente> getObjEncan() const { return objEncan; }
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
	std::shared_ptr<ObjetEnVente> objEncan;
};