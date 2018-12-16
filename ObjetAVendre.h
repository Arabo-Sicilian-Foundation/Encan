﻿#pragma once
#include "TypeObjet.h"

class ObjetAVendre
{
public:

	ObjetAVendre(std::string nomAcheteur, std::string nomVendeur, int prix);
	~ObjetAVendre();

private:
	std::string nomAcheteur;
	std::string nomVendeur;
	int prix;
};
