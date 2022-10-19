#pragma once
#include <iostream>
#include "Android.h"

Android::Android(std::string OSVersion) : _OSVersion(OSVersion)
{
}

void Android::showSpec()
{
	std::cout << _OSVersion << std::endl;
}