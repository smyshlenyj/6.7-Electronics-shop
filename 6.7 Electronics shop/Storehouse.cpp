#include "Storehouse.h"

void Storehouse::addStuff(IElectronics* stuff)
	{
		shelf.push_back(stuff);
	}

	int Storehouse::getSize() const
	{
		return shelf.size();
	}

	std::string Storehouse::getName(int i) const
	{
		return shelf[i]->getModel();
	}

	std::vector<IElectronics*> Storehouse::getShelf() const
	{
		return this->shelf;
	}