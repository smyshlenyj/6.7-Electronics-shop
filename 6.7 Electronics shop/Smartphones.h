#pragma once
#include "IElectronics.h"

class Smartphones : public IElectronics
{
protected:
	int _weight;
	const std::string _IMEI;

public:
	Smartphones(int weight, const std::string& IMEI);
	virtual ~Smartphones() = default;
};