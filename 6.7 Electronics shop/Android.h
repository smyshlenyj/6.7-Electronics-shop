#pragma once
#include "IOperatingSystem.h"
#include <iostream>

class Android : public IOperatingSystem
{
private:
	std::string _OSVersion;

public:
	Android(std::string OSVersion);
	virtual void showSpec() override;
};