#include "ObjetAVendre.h"

ObjetAVendre::ObjetAVendre(std::string nomAcheteur, std::string nomVendeur, int prix)
{
	this->nomAcheteur = nomAcheteur;
	this->nomVendeur = nomVendeur;
	this->prix = prix;
}

ObjetAVendre::~ObjetAVendre()
{

}