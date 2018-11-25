#include "Art.h"



Art::Art()
{
	setRenom(1);
	valeur = 0;
	dimension.x = 0;
	dimension.y = 0;
	dimension.z = 0;
	type = AUTRE;
	description = "";
}

Art::Art(int renom, float valeur, Dimension dimension, Type type, std::string description)
{
	this->renom = renom;
	this->valeur = valeur;
	this->dimension.x = dimension.x;
	this->dimension.y = dimension.y;
	this->dimension.z = dimension.z;
	this->type = type;
	this->description = description;
}


Art::~Art()
{
}

void Art::setRenom(int renom)
{
	if (renom > 0 && renom <= 100)
	{
		this->renom = renom;
	}
	else
	{
		this->renom = 1;
	}
}
