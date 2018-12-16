#pragma once

#include <functional>
#include "ObjetEnVente.h"
#include "Encan.h"


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
		setType(type);
		setNom(nom);
	}

	~Acheteur() {};

	void acheter();
	int probAchat();
	void setID(int id) { this->id = id; }
	void setBudget(int budget) { this->budget = budget; }
	void setType(TypeObjet::typeObjet type) { this->type = type; }
	void setProfil(Etat profil) { this->profil = profil; }
	void setNom(std::string nom) { this->nom = nom; }

private:
	std::string nom;
	int id;
	int budget;
	Etat profil;
	TypeObjet::typeObjet type;

};
