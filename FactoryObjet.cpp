#include "FactoryObjet.h"

FactoryObjet::FactoryObjet()
{

}

FactoryObjet::~FactoryObjet()
{

}

std::shared_ptr<Art> FactoryObjet::creeArt()
{
	Art* art[5] = {
		new Art(80, 150, 4, TypeArt::LIVRE, "Le Cid", "Jacques", std::make_shared<ObjetEnVente>(10, 40, 2, 30)),
		new Art(30, 35, 32, TypeArt::SCULPTURE, "Statue grec", "Jean", std::make_shared<ObjetEnVente>(20, 50, 3, 20)),
		new Art(90, 180, 10, TypeArt::PEINTURE, "La Joconde", "Leonard", std::make_shared<ObjetEnVente>(60, 120, 4, 25)),
		new Art(70, 90, 200, TypeArt::SCULPTURE, "Notre Dame de Paris", "Gustave", std::make_shared<ObjetEnVente>(5, 20, 5, 10)),
		new Art(10, 50, 5, TypeArt::LIVRE, "Tartufe", "Jean-Baptiste", std::make_shared<ObjetEnVente>(30, 50, 3, 15))
	};
	return (std::shared_ptr<Art>)art[rand() % 5];
}

std::shared_ptr<Antiquite> FactoryObjet::creeAntiquite()
{
	Antiquite* antiquite[5] = {
		new Antiquite("Silex", EtatAntiquite::USE, Periode::PREHISTOIRE, 30, "Noah", std::make_shared<ObjetEnVente>(5, 30, 2, 10)),
		new Antiquite("Amphore", EtatAntiquite::CASSE, Periode::ANTIQUITE, 20,"Henri", std::make_shared<ObjetEnVente>(10, 10, 3, 5)),
		new Antiquite("Armure", EtatAntiquite::NEUF, Periode::MOYEN_AGE, 200,"Victoria", std::make_shared<ObjetEnVente>(5, 40, 1, 15)),
		new Antiquite("Guillotine", EtatAntiquite::USE, Periode::MODERNE, 100,"Jacqueline", std::make_shared<ObjetEnVente>(15, 50, 1, 15)),
		new Antiquite("Fusil", EtatAntiquite::CASSE, Periode::MODERNE, 70,"Suzanne",std::make_shared<ObjetEnVente>(10, 20, 3, 20))
	};
	return (std::shared_ptr<Antiquite>)antiquite[rand() % 5];
}

std::shared_ptr<Service> FactoryObjet::creeService()
{
	Service* service[5] = {
		new Service(20, 100, TypeService::ELECTRICITE, 90, "Zoe", std::make_shared<ObjetEnVente>(10, 40, 3, 5)),
		new Service(30, 30, TypeService::MENAGE, 20, "Lea", std::make_shared<ObjetEnVente>(40, 50, 2, 15)),
		new Service(50, 200, TypeService::PLOMBERIE, 50, "Hugo", std::make_shared<ObjetEnVente>(40, 80, 1, 20)),
		new Service(20, 90, TypeService::VOYAGE, 20, "Michel", std::make_shared<ObjetEnVente>(50, 70, 2, 15)),
		new Service(10, 40, TypeService::PEINTURE, 40, "Monique", std::make_shared<ObjetEnVente>(30, 40, 3, 10))
	};
	return (std::shared_ptr<Service>)service[rand() % 5];
}
