#include "Acheteurs.h"

void Acheteur::acheter()
{

	bool interesse;
	bool vaAcheter;
	int time = 0;
	AdapterObjet* achat = nullptr;

	while (time < 5000) //10 tours
	{
		interesse = false;
		vaAcheter = false;
		Encan::getMutex()->lock();
		for (auto& i : (Encan::getInstance())->getListeObjet())
		{
			if (type == achat->getType())
			{
				if (probAchat() > rand()%100)
				{
					vaAcheter = true;
					break;
				}
			}
		}
		if (vaAcheter)
		{
			bool a = (Encan::getInstance())->encherir(achat, achat->getObjet()->getPrixActuel(), nom);
		}
		//sortie de la zone critique
		Encan::getMutex()->unlock();
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		time += 500;
	}
	//l'acheteur meurt
	delete this;
}

int Acheteur::probAchat()
{
	switch (profil)
	{
	case TRESFORT:
		return 60;
		break;
	case FORT:
		return 50;
		break;
	case MOYEN:
		return 40;
		break;
	case LENT:
		return 30;
		break;
	case TRESLENT:
		return 20;
		break;
	default:
		return 0;
	}
}
