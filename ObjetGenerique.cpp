#include "ObjetGenerique.h"

ObjetGenerique::ObjetGenerique()
{
}


ObjetGenerique::~ObjetGenerique()
{
}

std::string ObjetGenerique::getInfo()
{
	std::string typeObjet;

	if (type == TypeObjet::SERVICE)
		typeObjet = "SERVICE";
	if (type == TypeObjet::ANTIQUITE)
		typeObjet = "ANTIQUITE";
	if (type == TypeObjet::ART)
		typeObjet = "ART";

	return "Vendeur: " + nomVendeur + " Type: " + typeObjet;
}
