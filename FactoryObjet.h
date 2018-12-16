#pragma once
#include "Antiquite.h"
#include "Art.h"
#include "Service.h"

class FactoryObjet
{
public:
	FactoryObjet();

	~FactoryObjet();

	static Art* creeArt();
	static Antiquite* creeAntiquite();
	static Service* creeService();
};
