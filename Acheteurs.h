#pragma once

#include <functional>
#include "ObjetEncan.h"

//#include "Interet.h"
//en enum #MEF= new EtatPatient etc 
enum Etat { TRESFORT, FORT, MOYEN, LENT, TRESLENT, nb };

//template <class T>
class Acheteur
{
public:

	Acheteur(int id, int budget, Etat profil, Description interet)
	{
		setID(id);
		setBudget(budget);
		setProfil(profil);
		setInteret(interet);
	}

	~Acheteur() {};

	void acheter();
	int probAchat();
	void setID(int id) { this->id = id; }
	void setBudget(int budget) { this->budget = budget; }
	void setInteret(Description interet) { this->interet = interet; }
	void setProfil(Etat profil) { this->profil = profil; }

	//if (interessant(object))
	//return;//end of fonction :p 
	//if ((*interessant)(object))//etc
	//}//if T::categorie() == objet.categorie() }
	//void setState(EtatAcheteur etat);
private:
	int id;
	int budget;
	Etat profil;
	Description interet;

};
