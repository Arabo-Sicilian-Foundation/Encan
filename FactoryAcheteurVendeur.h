#pragma once
#include "Acheteurs.h"
#include "Vendeurs.h"
#include "pch.h"

class FactoryAcheteurVendeur
{
public:

	static Acheteur* createAcheteur();
	template <class T>
	static Vendeurs<T>* createVendeurs();
};
