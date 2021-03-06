﻿#pragma once
#include "AdapterObjet.h"
#include <thread>
#include <mutex>
#include <string>


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

	void pushObjet(AdapterObjet* o)
	{
		listeObjets.push_back(o);
	}

	bool estVendu(AdapterObjet* obj)
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
		for (auto i : getListeObjet())
		{
			std::string out = i->getInfo();
			std::cout << out;
		}
	}

	bool encherir(AdapterObjet* objet, int prix, std::string nomAcheteur) const
	{
		objet->getObjet()->addEnchere(new ObjetAVendre(nomAcheteur, objet->getNomVendeur(), prix));
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

	std::list<AdapterObjet*> listeObjets;
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
