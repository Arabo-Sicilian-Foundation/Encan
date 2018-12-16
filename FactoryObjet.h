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

	static std::shared_ptr<Art> creeArt();
	static std::shared_ptr<Antiquite> creeAntiquite();
	static std::shared_ptr<Service> creeService();

};
