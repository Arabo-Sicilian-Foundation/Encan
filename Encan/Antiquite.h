#ifndef ANTIQUITE_H
#define ANTIQUITE_H

#include "Objet.h"
class Antiquite :
	public Objet
{
public:
	enum Etat
	{
		BON,
		MOYEN,
		MAUVAIS
	};

	enum Periode
	{
		PREHISTOIRE,
		ANTIQUITE,
		MOYEN_AGE
	};

	Antiquite();
	Antiquite(std::string description, Etat etat, Periode periode, int valeur);
	~Antiquite();

	std::string getDescription() const { return description; }
	Etat getEtat() const { return etat; }
	Periode getPeriode() const { return periode; }
	float getValeur() const { return valeur; }

private:
	std::string description;
	Etat etat;
	Periode periode;
	float valeur;
};

#endif