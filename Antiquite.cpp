#include "pch.h"
#include "FactoryObjet.h"

Antiquite* Antiquite::callFactory()
{
	return FactoryObjet::createAntiquite();
}
