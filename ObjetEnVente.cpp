#include "ObjetEnVente.h"

ObjetEnVente::ObjetEnVente()
{

}

ObjetEnVente::ObjetEnVente(int prixIni, int prixMin, int minNbEnchere, int maxNbEnchere)
{
	this->prixInitial = prixIni;
	prixActuel = prixIni;
	this->prixMinimun = prixMin;
	this->minEnchere = minNbEnchere;
	this->maxEnchere = maxNbEnchere;
}

ObjetEnVente::~ObjetEnVente()
{
	for (auto i : encheres)
		delete i;
	encheres.clear();
}