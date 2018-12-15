#pragma once
#include "Antiquite.h"
#include "Art.h"
#include "Service.h"

class FactoryObjet
{
public:
	FactoryObjet()
	{
	}

	~FactoryObjet()
	{
	}

	static Art* createArt();
	static Antiquite* createAntiquite();
	static Service* createService();
};
