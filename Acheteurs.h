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

	Acheteur(int budget, Etat profil, Description interet)
	{
		this->budget = budget;
		this->interet = interet;
		this->profil = profil;
	}

	~Acheteur() {};

	void acheter();
	int probAchat();
	//if (interessant(object))
	//return;//end of fonction :p 
	//if ((*interessant)(object))//etc
	//}//if T::categorie() == objet.categorie() }
	//void setState(EtatAcheteur etat);
private:
	int budget;
	Etat profil;
	Description interet;

};
