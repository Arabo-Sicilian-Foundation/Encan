#pragma once

#include "EtatAntiquite.h"
#include "Periode.h"

class CaracAntiquite
{
public:
	CaracAntiquite();
	~CaracAntiquite();
	void setDescription(std::string description_) { description = description_; };
	void setEtat(EtatAntiquite::etatAntiquite etat_) { etat = etat_; };
	void setPeriode(Periode::periode periode_) {periode = periode_; };
	void setValeur(int valeur_) { valeur = valeur_; };
	void setVendeur(std::string nomVendeur_) { nomVendeur = nomVendeur_; };

private:
	std::string description;
	EtatAntiquite::etatAntiquite etat;
	Periode::periode periode;
	int valeur;
	std::string nomVendeur;

};

