﻿#pragma once
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

	void mettreAuxEncheres()
	{
		while (!objetEnEnchere)
		{
			Encan::getMutex()->lock();
			mettreAuxEncheres();
			objetEnEnchere = true;
			Encan::getMutex()->unlock();
			std::this_thread::sleep_for(std::chrono::milliseconds(20));
		}
		bool vendu = false;
		while (!vendu)
		{
			Encan::getMutex()->lock();
			vendu = Encan::getInstance()->estVendu(objet->getObjet());
			Encan::getMutex()->unlock();
			std::this_thread::sleep_for(std::chrono::milliseconds(500));
		}
	}

	void vendre()
	{
		if (!objetEnEnchere)
			mettreAuxEncheres();
	}

private:
	std::shared_ptr<T> objet;
	bool objetEnEnchere;
};

