#pragma once
#include "IOperatingSystem.h"
#include <iostream>

class Android : public IOperatingSystem
{
protected:
	const std::string _OSVersion;

public:
	Android(const std::string& OSVersion);
};