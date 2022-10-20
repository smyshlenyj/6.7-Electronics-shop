#pragma once
#include "IOperatingSystem.h"
#include <iostream>

class Android : public IOperatingSystem
{
private:
	const std::string _OSVersion;

public:
	Android(const std::string OSVersion);
	virtual void showSpec() override;
};