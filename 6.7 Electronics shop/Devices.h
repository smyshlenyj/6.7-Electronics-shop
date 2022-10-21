#pragma once
#include "IElectronics.h"
#include "Smartphones.h"
#include "Android.h"
#include "iOS.h"


class Xiaomi_Mi_12 : public Smartphones, Android
{
protected:
	const std::string _model = "Xiaomi Mi 12";
	int _batteryLife;

public:
	Xiaomi_Mi_12(int weight, std::string IMEI, int batteryLife, std::string OSVersion);
	virtual void showSpec() override;
	std::string getName() const;
	virtual std::string getModel() override;
};

class Xiaomi_Mi_11 : public Smartphones, Android
{
protected:
	const std::string _model = "Xiaomi Mi 11";
	int _batteryLife;

public:
	Xiaomi_Mi_11(int weight, const std::string IMEI, int batteryLife, const std::string OSVersion);
	virtual void showSpec() override;
	std::string getName() const;
	virtual std::string getModel() override;
};

class Xiaomi_Mi_10 : public Smartphones, Android
{
protected:
	const std::string _model = "Xiaomi Mi 10";
	int _batteryLife;

public:
	Xiaomi_Mi_10(int weight, const std::string IMEI, int batteryLife, const std::string OSVersion);
	virtual void showSpec() override;
	std::string getName() const;
	virtual std::string getModel() override;
};

class iPhone12 : public Smartphones, iOS
{
protected:
	const std::string _model = "iPhone 12";
	int _batteryLife;

public:
	iPhone12(int weight, const std::string IMEI, int batteryLife, const std::string OSVersion);
	virtual void showSpec() override;
	std::string getName() const;
	virtual std::string getModel() override;
};

class iPhone11 : public Smartphones, iOS
{
protected:
	const std::string _model = "iPhone 11";
	int _batteryLife;

public:
	iPhone11(int weight, const std::string IMEI, int batteryLife, const std::string OSVersion);
	virtual void showSpec() override;
	std::string getName() const;
	virtual std::string getModel() override;
};