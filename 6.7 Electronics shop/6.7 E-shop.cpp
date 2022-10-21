#include <iostream>
#include <vector>
#include "IElectronics.h"
#include "Devices.h"
#include "Storehouse.h"

int main()
{
	setlocale(LC_ALL, "");

	std::cout << "8888888888               888" << std::endl
		<< "888                      888       " << std::endl
		<< "888                      888      " << std::endl
		<< "8888888         .d8888b  88888b.   .d88b.  88888b.  " << std::endl
		<< "888             88K      888 \"88b d88\"\"88b 888 \"88b " << std::endl
		<< "888      888888 \"Y8888b. 888  888 888  888 888  888 " << std::endl
		<< "888                  X88 888  888 Y88..88P 888 d88P " << std::endl
		<< "8888888888       88888P' 888  888  \"Y88P\"  88888P\"  " << std::endl
		<< "                                           888     " << std::endl
		<< "                                           888     " << std::endl
		<< "                                           888     " << std::endl;

	Storehouse* smartStorehouse = new Storehouse();
	smartStorehouse->addStuff(new Xiaomi_Mi_12(140, "984253682267120", 78, "Android 12"));
	smartStorehouse->addStuff(new Xiaomi_Mi_11(130, "537966200099921", 74, "Android 12"));
	smartStorehouse->addStuff(new Xiaomi_Mi_10(135, "866291174820520", 71, "Android 12"));
	smartStorehouse->addStuff(new iPhone12(170, "109521740735324", 31, "iOS 15.6"));
	smartStorehouse->addStuff(new iPhone11(180, "508284919868254", 27, "iOS 15.6"));

	bool programAlive = true;
	while (programAlive)
	{
		std::cout << "\tВведите: \n\n";
		for (int i = 0; i < smartStorehouse->getSize(); ++i)
		{
			std::cout << "-----------------------------------------------------\n" <<
				i << "\t для выбора \t" << smartStorehouse->getName(i) << std::endl;
		}
		std::cout << "-----------------------------------------------------\n" <<
			smartStorehouse->getSize() << "\t для выхода из магазина \t" << std::endl;

		std::cout << "\n";

		int choice;
		std::cin >> choice;
		std::cout << "\n";

		if (choice < smartStorehouse->getSize() && choice >= 0)
		{
			smartStorehouse->getShelf()[choice]->showSpec();
			std::cout << "Вы хотите купить этот товар? Введите Y для того, чтобы купить, и любую другую клавишу, чтобы продолжить просмотр \n";

			char decideToBuy;
			std::cin >> decideToBuy;

			if (decideToBuy == 'Y' || decideToBuy == 'y')
			{
				std::cout << "\t USbank\n\n"
					"22.10.2022\t 14:23\t SUS4T734\n"
					"US BANK RANCHO CORDOVA\n"
					"RANCHO CORDOV   CA\n\n"
					"CARD\t\t ************0537\n"
					"RECORD NO.\t\t 9973\n"
					"WITHDRAWAL\t\t $1200.00\n"
					"FROM CHECKING\n"
					"************1858\n"
					"U.S. BANK\n"
					"TOTAL\t\t\t $1200.00\n"
					"ACCT BAL\t\t $373.00\n"
					"AVAIL BAL\t\t $373.00\n\n"
					"SEND MONEY THE FAST,SECURE WAY WITH\n"
					"U.S. BANK ONLINE AND MOBILE\n\n"
					"Спасибо за покупку!\n";

				programAlive = false;
			}
		}
		else
		{
			programAlive = false;
		}
	}
}