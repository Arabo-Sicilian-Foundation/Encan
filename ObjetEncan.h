#pragma once
#include <list>
#include "ObjetEnchere.h"



//contenu dans les objets
class ObjetEncan
{
public:

	enum typeObjet
	{
		ART,
		ANTIQUITE,
		SERVICE
	};

	ObjetEncan(int prixIni, int prixMin, int minNbEnchere, int maxNbEnchere)
	{
		this->prixIni = prixIni;
		prixActuel = prixIni;
		this->prixMin = prixMin;
		this->minNbEnchere = minNbEnchere;
		this->maxNbEnchere = maxNbEnchere;
	}

	void addEnchere(ObjetEnchere* obj)
	{
		encheres.push_back(obj);
	}

	~ObjetEncan()
	{
		for (auto i : encheres)
			delete i;
		encheres.clear();
	}

	int getPrixActuel() const { return prixActuel; }
	typeObjet getTypeObjet() const { return type; }

private:
	int prixIni;
	int prixMin;
	int prixActuel;
	int minNbEnchere;
	int maxNbEnchere;
	std::list<ObjetEnchere*> encheres;
	typeObjet type;
};
