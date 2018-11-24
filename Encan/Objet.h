#ifndef OBJET_H
#define OBJET_H

#include <string>

class Objet
{
private:
	float prixDepart;
	float prixMin;
	int debutVente;
	int nbEnchereMin;
	int nbEnchereMax;
	//enchere* listeEnchere;

public:
	Objet();
	Objet(float prixDepart, float prixMin, int debutVente, int nbEnchereMin, int nbEnchereMax);
	~Objet();

	float getPrixDepart() const { return prixDepart; }
	float getprixMin() const { return prixMin; }
	int getDebutVente() const { return debutVente; }
	int getNbEnchereMin() const { return nbEnchereMin; }
	int getNbEnchereMax() const { return nbEnchereMax; }
	//enchere* getListeEnchere() const { return listeEnchere; }
};

#endif