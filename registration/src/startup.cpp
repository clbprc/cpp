#include "includes.h"

int boot()
{
	SetConsoleTitleA("");
	std::cout << "Initializing... \n";
	Sleep(2000);
	system("cls");
	std::cout << "6th form registration system\n\n";
	std::cout << "[1] registration mode\n[2] settings\n[3] Standby\n[9] f_test()\n\n";
	int ini{};
	std::cin >> ini;		
	if (ini == 1)
	{
			//call registration		
	}
	if (ini == 2)
	{
			//call settings
	}
	if (ini == 3)
	{
			//call standby
	}
	if (ini == 9)
	{
		std::cout << "b1_dev settings\n\n";
		Sleep(1000);
		dev::menu();

	}
	return 0;
}
int isNewUser(std::string)
{
	std::cout << "isNewUser() called";
	return 0;
}





