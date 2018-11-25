#include "Service.h"



Service::Service()
{
	fraisDeBase = 0;
	tarifDebase = 0;
	typeDeService = AUTRE;
	experience = 0;
}

Service::Service(float fraisDeBase, float tarifDebase, TypeService typeDeService, int experience)
{
	this->fraisDeBase = fraisDeBase;
	this->tarifDebase = tarifDebase;
	this->typeDeService = typeDeService;
	this->experience = experience;
}


Service::~Service()
{
}
