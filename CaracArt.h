#pragma once

#include "TypeArt.h"

class CaracArt
{
public:
	CaracArt();
	~CaracArt();
	void setDescription(std::string description_) { description = description_; };
	void setValeur(int valeur_) { valeur = valeur_; };
	void setVolume(int volume_) { volume = volume_; };
	void setRenomee(int renomee_) { renomee = renomee_; };
	void setType(TypeArt::typeArt typeArt) { type = typeArt; };
	void setVendeur(std::string nomVendeur_) { nomVendeur = nomVendeur_; };
private:
	int renomee;
	int valeur;
	int volume;
	TypeArt::typeArt type;
	std::string description;
	std::string nomVendeur;
};

