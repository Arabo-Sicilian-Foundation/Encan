#pragma once

#include <functional>
#include "ObjetEncan.h"


class Acheteur
{
public:

	enum Etat 
	{ 
		TRESFORT,
		FORT,
		MOYEN,
		LENT,
		TRESLENT,
		nb
	};

	Acheteur(int id, std::string nom, int budget, Etat profil, TypeObjet::typeObjet type)
	{
		setID(id);
		setBudget(budget);
		setProfil(profil);
		setInteret(interet);
		setNom(nom);
	}

	~Acheteur() {};

	void acheter();
	int probAchat();
	void setID(int id) { this->id = id; }
	void setBudget(int budget) { this->budget = budget; }
	void setInteret(TypeObjet::typeObjet interet) { this->interet = interet; }
	void setProfil(Etat profil) { this->profil = profil; }
	void setNom(std::string nom) { this->nom = nom; }

private:
	std::string nom;
	int id;
	int budget;
	Etat profil;
	TypeObjet::typeObjet interet;

};
