#include "ObjetGenerique.h"

ObjetGenerique::ObjetGenerique()
{
}
ObjetGenerique::ObjetGenerique(CaracAntiquite carac, ObjetEncan objEnc)
{
	objEncan = objEnc;
	type = TypeObjet::ANTIQUITE;
	etatAntiquite = carac.etat;
	valeur = carac.valeur;
	periode = carac.periode;
	nomVendeur = carac.nomVendeur;
	description = carac.description;
}
ObjetGenerique::ObjetGenerique(CaracArt carac, ObjetEncan objEnc)
{
	objEncan = objEnc;
	type = TypeObjet::ART;
	typeArt = carac.type;
	valeur = carac.valeur;
	renomee = carac.renomee;
	nomVendeur = carac.nomVendeur;
	description = carac.description;
	volume = carac.volume;
}
ObjetGenerique::ObjetGenerique(CaracService carac, ObjetEncan objEnc)
{
	objEncan = objEnc;
	type = TypeObjet::ART;
	typeService = carac.type;
	tarif = carac.tarif;
	frais = carac.frais;
	nomVendeur = carac.nomVendeur;
	experience = carac.experience;
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
