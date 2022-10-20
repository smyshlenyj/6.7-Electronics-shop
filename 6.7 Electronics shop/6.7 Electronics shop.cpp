#include <iostream>
#include "IElectronics.h"
#include "Devices.h"
#include <vector>

int main()
{
	setlocale(LC_ALL, "");

	std::cout << "### ###  ####     ### ###   ## ##   #### ##  ### ##    ## ##   ###  ##    ####    ## ##         ## ##   #### ##   ## ##   ### ##   ### ###" << std::endl
		<< " ##  ##   ##       ##  ##  ##   ##  # ## ##   ##  ##  ##   ##    ## ##     ##    ##   ##       ##   ##  # ## ##  ##   ##   ##  ##   ##  ##" << std::endl
		<< " ##       ##       ##      ##         ##      ##  ##  ##   ##   # ## #     ##    ##            ####       ##     ##   ##   ##  ##   ##" << std::endl
		<< " ## ##    ##       ## ##   ##         ##      ## ##   ##   ##   ## ##      ##    ##             #####     ##     ##   ##   ## ##    ## ##" << std::endl
		<< " ##       ##       ##      ##         ##      ## ##   ##   ##   ##  ##     ##    ##                ###    ##     ##   ##   ## ##    ##" << std::endl
		<< " ##  ##   ##  ##   ##  ##  ##   ##    ##      ##  ##  ##   ##   ##  ##     ##    ##   ##       ##   ##    ##     ##   ##   ##  ##   ##  ##" << std::endl
		<< "### ###  ### ###  ### ###   ## ##    ####    #### ##   ## ##   ###  ##    ####    ## ##         ## ##    ####     ## ##   #### ##  ### ###" << std::endl;

	class Storehouse
	{
	private:
		std::vector<IElectronics*> shelf;

	public:
		void addStuff(IElectronics* stuff)
		{
			shelf.push_back(stuff);
		}
	};

	Storehouse* smartStorehouse = new Storehouse();
	smartStorehouse->addStuff(new Xiaomi_Mi_12(140, "984253682267120", 78, "Android 12"));
	smartStorehouse->addStuff(new Xiaomi_Mi_11(130, "537966200099921", 74, "Android 12"));
	smartStorehouse->addStuff(new Xiaomi_Mi_10(135, "866291174820520", 71, "Android 12"));
	smartStorehouse->addStuff(new iPhone12(170, "109521740735324", 31, "iOS 15.6"));
	smartStorehouse->addStuff(new iPhone11(180, "508284919868254", 27, "iOS 15.6"));

}






