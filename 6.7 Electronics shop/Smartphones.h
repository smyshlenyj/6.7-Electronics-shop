#pragma once
#include "IElectronics.h"

class Smartphones : public IElectronics
{
	std::string _IMEI;
	const std::string f;

public:
	Smartphones(std::string IMEI);
	virtual void showSpec() override;
	virtual ~Smartphones() = default;
};