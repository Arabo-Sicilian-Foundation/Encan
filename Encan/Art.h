#ifndef ART_H
#define ART_H

#include "Objet.h"
class Art :
	public Objet
{
public:
	typedef struct
	{
		int x;
		int y;
		int z;
	}Dimension;

	enum Type
	{
		TABLEAU,
		SCULPTURE,
		AUTRE
	};

	Art();
	Art(int renom, float valeur, Dimension dimension, Type type, std::string description);
	~Art();

	int getRenom() const { return renom; }
	float getValeur() const { return valeur; }
	Dimension getDimension() const { return dimension; }
	std::string getDescription() const { return description; }

private:
	int renom;
	float valeur;
	Dimension dimension;
	Type type;
	std::string description;

	void setRenom(int renom);
};

#endif