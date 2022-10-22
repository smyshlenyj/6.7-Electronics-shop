#pragma once
class IElectronics
{
public:
	virtual void showSpec() = 0;
	virtual std::string getModel() = 0;
	//virtual ~IElectronics() = default;
};
