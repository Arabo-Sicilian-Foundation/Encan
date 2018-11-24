#pragma once
#include "Objet.h"
class Antiquite :
	public Objet
{
public:
	Antiquite();
	~Antiquite();

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

	std::string getDescription const { return description; }

private:
	std::string description;
	Etat etat;
	Periode periode;
	float valeur;
};

