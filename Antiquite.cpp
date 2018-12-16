#include "Antiquite.h"
#include "FactoryObjet.h"

Antiquite::Antiquite(std::string description, EtatAntiquite::etatAntiquite etat_, Periode::periode periode, int valeur, std::string nomVendeur, std::shared_ptr<ObjetEnVente> obj)
{
	carac.setDescription(description);
	carac.setEtat(etat_);
	carac.setPeriode(periode);
	carac.setValeur(valeur);
	carac.setVendeur(nomVendeur);
	objEnVente = obj;
}

Antiquite::~Antiquite()
{
}

Antiquite* Antiquite::callFactory()
{
	return FactoryObjet::creeAntiquite();
}
