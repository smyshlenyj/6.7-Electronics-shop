#include <iostream>
#include "Devices.h"
#include <string>

Xiaomi_Mi_12::Xiaomi_Mi_12(int weight, const std::string& IMEI, int batteryLife, const std::string& OSVersion) : Smartphones(weight, IMEI), _batteryLife(batteryLife), Android(OSVersion)
{
}
void Xiaomi_Mi_12::showSpec()
{
	std::cout << "Модель:\t\t\t\t\t\t" << _model << std::endl;
	std::cout << "Время работы от батареи:\t\t" << _batteryLife << " часов" << std::endl;
	std::cout << "Вес товара:\t\t\t\t\t" << _weight << " грамм" << std::endl;
	std::cout << "Версия операционной системы:\t" << _OSVersion << std::endl;
	std::cout << "IMEI:\t\t\t\t\t\t\t" << _IMEI << std::endl << std::endl;
}

const std::string Xiaomi_Mi_12::getModel() const
{
	return _model;
}

Xiaomi_Mi_11::Xiaomi_Mi_11(int weight, const std::string& IMEI, int batteryLife, const std::string& OSVersion) : Smartphones(weight, IMEI), _batteryLife(batteryLife), Android(OSVersion)
{
}

void Xiaomi_Mi_11::showSpec()
{
	std::cout << "Модель:\t\t\t\t\t\t" << _model << std::endl;
	std::cout << "Время работы от батареи:\t\t" << _batteryLife << " часов" << std::endl;
	std::cout << "Вес товара:\t\t\t\t\t" << _weight << " грамм" << std::endl;
	std::cout << "Версия операционной системы:\t" << _OSVersion << std::endl;
	std::cout << "IMEI:\t\t\t\t\t\t\t" << _IMEI << std::endl << std::endl;
}

const std::string Xiaomi_Mi_11::getModel() const
{
	return _model;
}

Xiaomi_Mi_10::Xiaomi_Mi_10(int weight, const std::string& IMEI, int batteryLife, const std::string& OSVersion) : Smartphones(weight, IMEI), _batteryLife(batteryLife), Android(OSVersion)
{
}

void Xiaomi_Mi_10::showSpec()
{
	std::cout << "Модель:\t\t\t\t\t\t" << _model << std::endl;
	std::cout << "Время работы от батареи:\t\t" << _batteryLife << " часов" << std::endl;
	std::cout << "Вес товара:\t\t\t\t\t" << _weight << " грамм" << std::endl;
	std::cout << "Версия операционной системы:\t" << _OSVersion << std::endl;
	std::cout << "IMEI:\t\t\t\t\t\t\t" << _IMEI << std::endl << std::endl;
}

std::string Xiaomi_Mi_10::getModel()
{
	return _model;
}

iPhone12::iPhone12(int weight, const std::string& IMEI, int batteryLife, const std::string& OSVersion) : Smartphones(weight, IMEI), _batteryLife(batteryLife), iOS(OSVersion)
{
}

void iPhone12::showSpec()
{
	std::cout << "Модель:\t\t\t\t\t\t" << _model << std::endl;
	std::cout << "Время работы от батареи:\t\t" << _batteryLife << " часов" << std::endl;
	std::cout << "Вес товара:\t\t\t\t\t" << _weight << " грамм" << std::endl;
	std::cout << "Версия операционной системы:\t" << _OSVersion << std::endl;
	std::cout << "IMEI:\t\t\t\t\t\t\t" << _IMEI << std::endl << std::endl;
}

const std::string iPhone12::getModel() const
{
	return _model;
}

iPhone11::iPhone11(int weight, const std::string& IMEI, int batteryLife, const std::string& OSVersion) : Smartphones(weight, IMEI), _batteryLife(batteryLife), iOS(OSVersion)
{
}

void iPhone11::showSpec()
{
	std::cout << "Модель:\t\t\t\t\t\t" << _model << std::endl;
	std::cout << "Время работы от батареи:\t\t" << _batteryLife << " часов" << std::endl;
	std::cout << "Вес товара:\t\t\t\t\t" << _weight << " грамм" << std::endl;
	std::cout << "Версия операционной системы:\t" << _OSVersion << std::endl;
	std::cout << "IMEI:\t\t\t\t\t\t\t" << _IMEI << std::endl << std::endl;
}

const std::string iPhone11::getModel() const
	return _model;
}