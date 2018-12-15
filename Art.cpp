#include "pch.h"
#include "FactoryObjet.h"

Art* Art::callFactory()
{
	return FactoryObjet::createArt();
}
