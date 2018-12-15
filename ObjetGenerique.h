#pragma once

#include "ObjetEncan.h"
class ObjetGenerique
{
public:
	ObjetGenerique();
	~ObjetGenerique();

	ObjetEncan getObjEncan() const { return objEncan; }
	std::string getInfo();
	std::string getNomVendeur() const { return nomVendeur; }
	TypeObjet::typeObjet getType() const { return type; }

private:
	std::string nomVendeur;
	TypeObjet::typeObjet type;
	ObjetEncan objEncan;
};