#include <iostream>
#include "Devices.h"

Xiaomi_Mi_12::Xiaomi_Mi_12(int batteryLife, std::string OSVersion) : _batteryLife(batteryLife), Android(OSVersion)
{
}
void Xiaomi_Mi_12::showSpec()
{
	std::cout << _batteryLife << std::endl;
}

Xiaomi_Mi_11::Xiaomi_Mi_11(int batteryLife, int weight, std::string OSVersion) : _batteryLife(batteryLife), Smartphones(weight), Android(OSVersion)
{
}
void Xiaomi_Mi_11::showSpec()
{
	std::cout << _batteryLife << std::endl;
}

Xiaomi_Mi_10::Xiaomi_Mi_10(int batteryLife, int weight, std::string OSVersion) : _batteryLife(batteryLife), Smartphones(weight), Android(OSVersion)
{
}
void Xiaomi_Mi_10::showSpec()
{
	std::cout << _batteryLife << std::endl;
}

iPhone12::iPhone12(int batteryLife, int weight, std::string OSVersion) : _batteryLife(batteryLife), Smartphones(weight), iOS(OSVersion)
{
}
void iPhone12::showSpec()
{
	std::cout << _batteryLife << std::endl;
}

iPhone11::iPhone11(int batteryLife, int weight, std::string OSVersion) : _batteryLife(batteryLife), Smartphones(weight), iOS(OSVersion)
{
}
void iPhone11::showSpec()
{
	std::cout << _batteryLife << std::endl;
}