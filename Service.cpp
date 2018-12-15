#include "pch.h"
#include "FactoryObjet.h"

Service* Service::callFactory()
{
	return FactoryObjet::createService();
}
