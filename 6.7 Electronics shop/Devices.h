#pragma once
#include "IElectronics.h"
#include "Smartphones.h"
#include "Android.h"
#include "iOS.h"


class Xiaomi_Mi_12 : public Smartphones, Android
{
protected:
	int _batteryLife;
	const int weight = 140;

public:
	Xiaomi_Mi_12(int batteryLife, std::string OSVersion);
	virtual void showSpec() override;
};

class Xiaomi_Mi_11 : public Smartphones, Android
{
protected:
	int _batteryLife;

public:
	Xiaomi_Mi_11(int batteryLife, int weight, std::string OSVersion);
	virtual void showSpec() override;
};

class Xiaomi_Mi_10 : public Smartphones, Android
{
protected:
	int _batteryLife;

public:
	Xiaomi_Mi_10(int batteryLife, int weight, std::string OSVersion);
	virtual void showSpec() override;
};

class iPhone12 : public Smartphones, iOS
{
protected:
	int _batteryLife;

public:
	iPhone12(int batteryLife, int weight, std::string OSVersion);
	virtual void showSpec() override;
};

class iPhone11 : public Smartphones, iOS
{
protected:
	int _batteryLife;

public:
	iPhone11(int batteryLife, int weight, std::string OSVersion);
	virtual void showSpec() override;
};