#include "pch.h"
#include "Encan.h"

Encan* Encan::instance;
std::mutex* Encan::mtx;
int Encan::temps;

void Encan::passerTemps()
{
	while (true)
	{
		std::this_thread::sleep_for(std::chrono::seconds(1));
		temps++;
	}
}

