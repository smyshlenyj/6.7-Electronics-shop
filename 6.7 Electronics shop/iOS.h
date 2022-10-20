#pragma once
#include "IOperatingSystem.h"

class iOS : public IOperatingSystem
{
private:
	const std::string _OSVersion;

public:
	iOS(const std::string OSVersion);
	virtual void showSpec() override;
};