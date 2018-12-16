#pragma once
#include "TypeObjet.h"
#include <iostream>

class ObjetAVendre
{
public:

	ObjetAVendre(std::string nomAcheteur, std::string nomVendeur, int prix);
	~ObjetAVendre();

	std::string getNomAcheteur() const { return nomAcheteur; }
	std::string getNomVendeur() const { return nomVendeur; }

private:
	std::string nomAcheteur;
	std::string nomVendeur;
	int prix;
};
