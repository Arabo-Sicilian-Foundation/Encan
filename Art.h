#pragma once
#include "AdapterObjet.h"

class Art
{
public:

	~Art();

	std::shared_ptr<AdapterObjet> getObjet() { return std::make_shared<AdapterObjet>(carac, objEnVente); }
	static std::shared_ptr<Art> callFactory();

	friend class FactoryObjet;


private:
	Art(int renomee, int valeur, int volume, TypeArt::typeArt type, std::string description, std::string nomVendeur, std::shared_ptr<ObjetEnVente> obj);

	std::shared_ptr<ObjetEnVente> objEnVente;

	CaracArt carac;
};
