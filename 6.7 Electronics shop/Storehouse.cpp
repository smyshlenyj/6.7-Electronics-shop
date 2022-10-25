#include "Storehouse.h"

void Storehouse::addStuff(IElectronics* stuff)
{
	shelf.push_back(stuff);
}

const int Storehouse::getSize() const
{
	return shelf.size();
}

const std::string Storehouse::getName(int i) const
{
	return shelf[i]->getModel();
}

const std::vector<IElectronics*> Storehouse::getShelf() const
{
	return this->shelf;
}

Storehouse::~Storehouse()
{
	std::cout << "Деструктор удаляет ";
}