#include "Antiquite.h"



Antiquite::Antiquite()
{
	description = "";
	etat = MOYEN;
	periode = ANTIQUITE;
	valeur = 0;
}

Antiquite::Antiquite(std::string description, Etat etat, Periode periode, int valeur)
{
	this->description = description;
	this->etat = etat;
	this->periode = periode;
	this->valeur = valeur;
}


Antiquite::~Antiquite()
{
}
