#pragma once

#include <random>
#include "AdapterObjet.h"
#include "Art.h"
#include "Antiquite.h"
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
