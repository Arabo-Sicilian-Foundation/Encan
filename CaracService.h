#pragma once

#include "TypeService.h"

class CaracService
{
public:
	CaracService();
	~CaracService();
	void setFrais(int frais_) { frais = frais_; };
	void setExperience(int xp) { experience = xp; };
	void setTarif(int tarif_) { tarif = tarif_; };
	void setType(TypeSer typeSer) { type = typeSer; };
	void setVendeur(std::string vendeur) { nomVendeur = vendeur; };

private:
	int frais;
	int experience;
	int tarif;
	TypeSer type;
	std::string nomVendeur;
};

