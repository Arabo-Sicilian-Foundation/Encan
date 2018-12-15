#include "ObjetEncan.h"

ObjetEncan::ObjetEncan()
{

}

ObjetEncan::ObjetEncan(int prixIni, int prixMin, int minNbEnchere, int maxNbEnchere)
{
	this->prixIni = prixIni;
	prixActuel = prixIni;
	this->prixMin = prixMin;
	this->minNbEnchere = minNbEnchere;
	this->maxNbEnchere = maxNbEnchere;
}

ObjetEncan::~ObjetEncan()
{
	for (auto i : encheres)
		delete i;
	encheres.clear();
}