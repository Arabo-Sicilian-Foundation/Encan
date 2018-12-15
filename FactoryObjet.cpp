#include "pch.h"
#include "FactoryObjet.h"
#include "ObjetGenerique.h"
#include "Art.h"
#include "Antiquite.h"
#include "Service.h"
#include <random>

Art* FactoryObjet::createArt()
{
	Art* art[5] = {
		new Art(99, 100, 10, TypeArt::LIVRE, "La Bible", "Jacques", std::make_shared<ObjetEncan>(20, 50, 3, 20)),
		new Art(80, 40, 40, TypeArt::SCULPTURE, "Le Penseur", "Jean", std::make_shared<ObjetEncan>(10, 20, 1, 10)),
		new Art(60, 200, 20, TypeArt::PEINTURE, "La Joconde", "Leonard", std::make_shared<ObjetEncan>(50, 100, 5, 30)),
		new Art(50, 20, 100, TypeArt::SCULPTURE, "La Tour Eiffel", "Gustave", std::make_shared<ObjetEncan>(0, 10, 1, 5)),
		new Art(10, 50, 5, TypeArt::LIVRE, "Les Fleurs du Mal", "Charles", std::make_shared<ObjetEncan>(10, 30, 2, 10))
	};
	return std::move(art[int(floor(5 * rand() / RAND_MAX))]);
}

Antiquite* FactoryObjet::createAntiquite()
{
	Antiquite* antiquite[5] = {
		new Antiquite("Peinture Rupestre", EtatAntiquite::USE, Periode::PREHISTOIRE, 20, "Noah", std::make_shared<ObjetEncan>(0, 10, 1, 5)),
		new Antiquite("Vase decoratif", EtatAntiquite::CASSE, Periode::ANTIQUITE, 30,"Henri", std::make_shared<ObjetEncan>(10, 20, 1, 10)),
		new Antiquite("Armure de chevalier", EtatAntiquite::NEUF, Periode::MOYEN_AGE, 100,"Victoria", std::make_shared<ObjetEncan>(20, 50, 3, 20)),
		new Antiquite("Guillotine", EtatAntiquite::USE, Periode::MODERNE, 80,"Jacqueline", std::make_shared<ObjetEncan>(20, 40, 2, 10)),
		new Antiquite("Sabre de cavalerie", EtatAntiquite::CASSE, Periode::MODERNE, 50,"Suzanne",std::make_shared<ObjetEncan>(20, 30, 1, 10))
	};
	return std::move(antiquite[int(floor(5 * rand() / RAND_MAX))]);
}

Service* FactoryObjet::createService()
{
	Service* service[5] = {
		new Service(10, 50, TypeService::ELECTRICITE, 100, "Zoe", std::make_shared<ObjetEncan>(20, 30, 1, 10)),
		new Service(20, 100, TypeService::MENAGE, 80, "Lea", std::make_shared<ObjetEncan>(50, 80, 3, 20)),
		new Service(30, 80, TypeService::PLOMBERIE, 60, "Hugo", std::make_shared<ObjetEncan>(30, 50, 2, 15)),
		new Service(40, 40, TypeService::VOYAGE, 40, "Michel", std::make_shared<ObjetEncan>(30, 50, 2, 10)),
		new Service(50, 100, TypeService::VOYAGE, 20, "Monique", std::make_shared<ObjetEncan>(50, 80, 3, 20))
	};
	return std::move(service[int(floor(5 * rand() / RAND_MAX))]);
}
