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
	int getSize() const;
	std::string getName(int i) const;
	std::vector<IElectronics*> getShelf() const;
	~Storehouse();
};