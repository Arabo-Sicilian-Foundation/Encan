#include "Objet.h"

Objet::Objet()
{
	prixDepart = 0;
	prixMin = 0;
	debutVente = 0;
	nbEnchereMin = 0;
	nbEnchereMax = 99;
}

Objet::Objet(float prixDepart, float prixMin, int debutVente, int nbEnchereMin, int nbEnchereMax)
{
	this->prixDepart = prixDepart;
	this->prixMin = prixMin;
	this->debutVente = debutVente;
	this->nbEnchereMin = nbEnchereMin;
	this->nbEnchereMax = nbEnchereMax;
}


Objet::~Objet()
{
}
