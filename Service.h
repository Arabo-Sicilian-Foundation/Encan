#pragma once
#include "AdapterObjet.h"

class Service
{
public:

	~Service(); 

	std::shared_ptr<AdapterObjet> getObjet() { return std::make_shared<AdapterObjet>(carac, objEnVente); }
	static Service* callFactory();

	friend class FactoryObjet;

private:

	Service(int frais, int tarif, TypeService::typeService type, int xp, std::string nomVendeur, std::shared_ptr<ObjetEnVente> obj);

	std::shared_ptr<ObjetEnVente> objEnVente;
	CaracService carac;


};
