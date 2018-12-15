#pragma once

#include "ObjetEncan.h"
class ObjetGenerique
{
public:
	ObjetGenerique();
	~ObjetGenerique();

	ObjetEncan getObjEncan() const;
	void getInfo();
	std::string getNomVendeur() const { return nomVendeur; }
	typeObjet getType() const { return type; }

private:
	std::string nomVendeur;
	typeObjet type;
};