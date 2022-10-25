#pragma once
#include "IOperatingSystem.h"

class iOS : public IOperatingSystem
{
protected:
	const std::string _OSVersion;

public:
	iOS(const std::string& OSVersion);
};