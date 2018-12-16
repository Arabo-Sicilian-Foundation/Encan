#pragma once
#include "Acheteurs.h"
#include "Vendeurs.h"
#include <random>
#include <functional>

class FactoryAcheteurVendeur
{
public:

	static Acheteur* createAcheteur();

	template <class T>
	static Vendeurs<T>* createVendeurs()
	{
		return new Vendeurs<T>(T::callFactory());
	}
};
