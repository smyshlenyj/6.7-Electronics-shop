#pragma once
#include <iostream>
#include "iOS.h"

iOS::iOS(std::string OSVersion) : _OSVersion(OSVersion)
{
}

void iOS::showSpec()
{
	std::cout << _OSVersion << std::endl;
}