#pragma once
#include "IElectronics.h"

class Smartphones : public IElectronics
{
	int _weight;
	std::string _IMEI;

public:
	Smartphones(int weight, std::string IMEI);
	virtual void showSpec() override;
	virtual ~Smartphones() = default;
};