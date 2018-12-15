#pragma once

#include <functional>
#include "ObjetGenerique.h"
#include "EtatAcheteur.h"

//#include "Interet.h"
//en enum #MEF= new EtatPatient etc 
//enum EtatAcheteur { AGRESSIF, MODERE, PATIENT, RAPIDE, LENT, nb };

//on part sur un template #plus lisible
//typedef enum ObjetInteresse{ ART, ANTIQUITE,};

//template <class T>
class Acheteurs
{
public:

	Acheteurs(int budgetAchat, EtatAcheteur t, std::function<bool(ObjetGenerique&)> interet, std::string nom_acheteur)
	{
		budget = budgetAchat;
		interessant = interet;
		type = t;
		nom = nom_acheteur;
	}

	~Acheteurs()
	{
	};
	std::string getNom() const { return nom; }
	//return un string, un chifre nevermind ^^
	void acheter();
	//if (interessant(object))
	//return;//end of fonction :p 
	//if ((*interessant)(object))//etc
	//}//if T::categorie() == objet.categorie() }
	//void setState(EtatAcheteur etat);
private:
	int budget;
	EtatAcheteur type;
	std::function<bool(ObjetGenerique&)> interessant;
	std::string nom;
	Etat* currentEtat;

};
