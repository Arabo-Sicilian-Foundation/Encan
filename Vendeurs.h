#pragma once
#include "Encan.h"

template <class T>
class Vendeurs
{
public:
	Vendeurs(std::shared_ptr<T> objet)
	{
		this->objet = objet;
		objet_en_enchere = false;
	}

	~Vendeurs()
	{
	};

	void mettreAuxEnchères()
	{
		while (!objet_en_enchere)
		{
			Encan::getMutex()->lock();
			mettreAuxEnchères();
			objet_en_enchere = true;
			Encan::getMutex()->unlock();
			std::this_thread::sleep_for(std::chrono::milliseconds(20));
		}
		bool vendu = false;
		while (!vendu)
		{
			Encan::getMutex()->lock();
			vendu = Encan::getInstance()->estVendu(objet.get()->getObjectGenerique().get());
			Encan::getMutex()->unlock();
			std::this_thread::sleep_for(std::chrono::milliseconds(500));
		}
	}

	void vendre()
	{
		if (!objet_en_enchere)
			mettreAuxEnchères();
	}

private:
	std::shared_ptr<T> objet;
	bool objet_en_enchere;
};

