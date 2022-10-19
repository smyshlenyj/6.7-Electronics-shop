#include <iostream>
#include "Smartphones.h"

Smartphones::Smartphones(std::string IMEI)
{
	_IMEI = IMEI;

}

void Smartphones::showSpec()
{
	std::cout << _IMEI << std::endl;
}