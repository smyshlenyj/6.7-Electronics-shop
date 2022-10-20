#include <iostream>
#include "Devices.h"

Xiaomi_Mi_12::Xiaomi_Mi_12(int weight, std::string IMEI, int batteryLife, std::string OSVersion) : Smartphones(weight, IMEI), _batteryLife(batteryLife), Android(OSVersion)
{
}
void Xiaomi_Mi_12::showSpec()
{
	std::cout << _batteryLife << std::endl;
}

Xiaomi_Mi_11::Xiaomi_Mi_11(int weight, std::string IMEI, int batteryLife, std::string OSVersion) : Smartphones(weight, IMEI), _batteryLife(batteryLife), Android(OSVersion)
{
}
void Xiaomi_Mi_11::showSpec()
{
	std::cout << _batteryLife << std::endl;
}

Xiaomi_Mi_10::Xiaomi_Mi_10(int weight, std::string IMEI, int batteryLife, std::string OSVersion) : Smartphones(weight, IMEI), _batteryLife(batteryLife), Android(OSVersion)
{
}
void Xiaomi_Mi_10::showSpec()
{
	std::cout << _batteryLife << std::endl;
}

iPhone12::iPhone12(int weight, std::string IMEI, int batteryLife, std::string OSVersion) : Smartphones(weight, IMEI), _batteryLife(batteryLife), iOS(OSVersion)
{
}
void iPhone12::showSpec()
{
	std::cout << _batteryLife << std::endl;
}

iPhone11::iPhone11(int weight, std::string IMEI, int batteryLife, std::string OSVersion) : Smartphones(weight, IMEI), _batteryLife(batteryLife), iOS(OSVersion)
{
}
void iPhone11::showSpec()
{
	std::cout << _batteryLife << std::endl;
}