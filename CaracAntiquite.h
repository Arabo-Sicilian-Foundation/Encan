#pragma once

#include "StructEtat.h"
#include "Periode.h"

class CaracAntiquite
{
public:
	CaracAntiquite();
	~CaracAntiquite();
	void setDescription(std::string description_) { description = description_; };
	void setEtat(StructEtat etat_) { etat = etat_; };
	void setPeriode(Periode periode_) {periode = periode_; };
	void setValeur(int valeur_) { valeur = valeur_; };
	void setVendeur(std::string nomVendeur_) { nomVendeur = nomVendeur_; };

private:
	std::string description;
	StructEtat etat;
	Periode periode;
	int valeur;
	std::string nomVendeur;

};

