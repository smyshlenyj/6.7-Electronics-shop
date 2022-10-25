#pragma once
#include <iostream>
#include <vector>
#include "IElectronics.h"


class Storehouse
{
private:
	std::vector<IElectronics*> shelf;

public:
	void addStuff(IElectronics* stuff);
	const int getSize() const;
	const std::string getName(int i) const;
	const std::vector<IElectronics*> getShelf() const;
	~Storehouse();
};