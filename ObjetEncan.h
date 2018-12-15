#pragma once
#include <list>
#include "ObjetEnchere.h"

class ObjetEncan
{
public:
	ObjetEncan();

	ObjetEncan(int prixIni, int prixMin, int minNbEnchere, int maxNbEnchere);

	void addEnchere(ObjetEnchere* obj)
	{
		encheres.push_back(obj);
	}

	~ObjetEncan();

	int getPrixActuel() const { return prixActuel; }
	TypeObjet::typeObjet getTypeObjet() const { return type; }

private:
	int prixIni;
	int prixMin;
	int prixActuel;
	int minNbEnchere;
	int maxNbEnchere;
	std::list<ObjetEnchere*> encheres;
	TypeObjet::typeObjet type;
};
