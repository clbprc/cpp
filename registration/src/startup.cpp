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
		test::registration();
	}
	if (ini == 2)
	{
		settings();
	}
	if (ini == 3)
	{
		standby();
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

int settings()
{
	system("cls");
	std::cout << "Settings:\n\n[1] Upload database tutorial";
	return 0;
}
int standby()
{
	while (true)
	{
		int x =+ 2;
		std::cout << x;
		system("cls");
		
	}
	return 0;
}

namespace test
{
	int registration()
	{
		std::cout << "[1] f_make\n[2] f_write\n[3] f_read\n[4] f_clear\n\n";
		int f{};
		std::cin >> f;

		if (f == 1)
		{
			std::cout << "this needs to be removed";
		}
		if (f == 2)
		{
			f_write("register.txt", "test text\nline2");
		}
		if (f == 3)
		{
			f_read("register.txt");
		}
		else
		{
			std::cout << "else";
		}



		return 0;
	}
}
