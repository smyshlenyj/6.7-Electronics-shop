#include <iostream>
#include "Smartphones.h"

Smartphones::Smartphones(int weight, std::string IMEI) : _weight(weight), _IMEI(IMEI)
{
}

void Smartphones::showSpec()
{
	std::cout << _weight << std::endl;
}