#include "AdapterObjet.h"

AdapterObjet::AdapterObjet()
{
}
AdapterObjet::AdapterObjet(CaracAntiquite carac, std::shared_ptr<ObjetEnVente> objEnc)
{
	objEncan = objEnc;
	type = TypeObjet::ANTIQUITE;
	etatAntiquite = carac.etat;
	valeur = carac.valeur;
	periode = carac.periode;
	nomVendeur = carac.nomVendeur;
	description = carac.description;
}
AdapterObjet::AdapterObjet(CaracArt carac, std::shared_ptr<ObjetEnVente> objEnc)
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
AdapterObjet::AdapterObjet(CaracService carac, std::shared_ptr<ObjetEnVente> objEnc)
{
	objEncan = objEnc;
	type = TypeObjet::ART;
	typeService = carac.type;
	tarif = carac.tarif;
	frais = carac.frais;
	nomVendeur = carac.nomVendeur;
	experience = carac.experience;
}

AdapterObjet::~AdapterObjet()
{
}

std::string AdapterObjet::getInfo()
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
