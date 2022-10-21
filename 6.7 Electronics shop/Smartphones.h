#pragma once
#include "IElectronics.h"

class Smartphones : public IElectronics
{
protected:
	int _weight;
	std::string _IMEI;

public:
	Smartphones(int weight, std::string IMEI);
	virtual ~Smartphones() = default;
};