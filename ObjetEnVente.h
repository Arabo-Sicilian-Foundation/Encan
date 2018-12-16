#pragma once
#include <list>
#include "ObjetAVendre.h"

class ObjetEnVente
{
public:
	ObjetEnVente();

	ObjetEnVente(int prixInitial, int prixMinimun, int minNbEnchere, int maxNbEnchere);

	void addEnchere(ObjetAVendre* obj)
	{
		encheres.push_back(obj);
	}

	~ObjetEnVente();

	int getPrixActuel() const { return prixActuel; }
	TypeObjet::typeObjet getTypeObjet() const { return type; }

private:
	int prixInitial;
	int prixMinimun;
	int prixActuel;
	int minEnchere;
	int maxEnchere;
	std::list<ObjetAVendre*> encheres;
	TypeObjet::typeObjet type;
};
