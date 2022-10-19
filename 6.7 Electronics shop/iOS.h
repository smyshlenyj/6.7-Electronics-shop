#pragma once
#include "IOperatingSystem.h"

class iOS : public IOperatingSystem
{
private:
	std::string _OSVersion;

public:
	iOS(std::string OSVersion);
	virtual void showSpec() override;
};