#ifndef SERVICE_H
#define SERVICE_H

#include "Objet.h"
class Service :
	public Objet
{
public:
	enum TypeService
	{
		SERVICE1,
		SERVICE2,
		SERVICE3,
		SERVICE4,
		AUTRE
	};

	Service();
	Service(float fraisDeBase, float tarifDebase, TypeService typeDeService, int experience);
	~Service();

	float getFraisDeBase() const { return fraisDeBase; }
	float getTarifDeBase() const { return tarifDebase; }
	TypeService getTypeDeService() const { return typeDeService; }
	int getExperience() const { return experience; }

private:
	float fraisDeBase;
	float tarifDebase;
	TypeService typeDeService;
	int experience;
};

#endif