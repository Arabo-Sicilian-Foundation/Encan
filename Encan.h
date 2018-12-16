#pragma once
#include <list>
#include "ObjetGenerique.h"
#include <iostream>
#include <thread>
#include <mutex>


class Encan
{
public:
	~Encan()
	{
		for (auto i : listeObjets)
			delete i;
	}

	static Encan* getInstance()
	{
		if (instance == nullptr)
		{
			instance = new Encan();
		}
		return instance;
	}

	void pushObjet(ObjetGenerique* o)
	{
		listeObjets.push_back(o);
	}

	bool estVendu(ObjetGenerique* obj)
	{
		for (auto i : listeObjets)
			if (i == obj)
				return true;
		return false;
	}

	auto getListeObjet() const
	{
		return listeObjets;
	}

	void afficheInformation()
	{
		for (auto i : listeObjets)
		{
			std::string out = i->getInfo();
			//std::cout << out;
		}
	}

	bool encherir(ObjetGenerique* objetGenerique, int prix, std::string nomAcheteur) const
	{
		objetGenerique->getObjEncan()->addEnchere(new ObjetEnchere(nomAcheteur, objetGenerique->getNomVendeur(), prix));
		return true;
	}

	static int getTemps() { return temps; }

	static void passerTemps();

	static std::mutex* getMutex()
	{
		if (mtx == nullptr)
			mtx = new std::mutex();
		return mtx;
	}
private:

	std::list<ObjetGenerique*> listeObjets;
	static std::mutex* mtx;

	Encan()
	{
		temps = 0;
		std::thread daemon(passerTemps);
		daemon.detach();
	}
	static Encan* instance;

	static int temps;
};
