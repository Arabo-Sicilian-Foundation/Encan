#include "Acheteurs.h"

void Acheteur::acheter()
{

	bool interesse;
	bool va_acheter;
	int time = 0;
	AdapterObjet* achat = nullptr;

	while (time < 5000) //10 tours
	{
		interesse = false;
		va_acheter = false;
		Encan::getMutex()->lock();
		for (auto& i : (Encan::getInstance())->getListeObjet())
		{
			if (type == achat->getType())
			{
				if (probAchat() > rand() / RAND_MAX)
				{
					va_acheter = true;
					break;
				}
			}
		}
		if (va_acheter)
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
