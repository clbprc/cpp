#include "includes.h"

namespace dev
{
	int menu()
	{
		system("cls");
		std::cout << "development mode is active\n\n";
		std::cout << "[1] file testing\n";
		int dm{};
		std::cin >> dm;

		if (dm == 1)
		{
			f_testing("newfile", "1. this should be on line 1\n2. what line is this");
		}
		return 0;
	}
	
	
	int f_testing(std::string filename, std::string text)				//this works wonders
	{
		std::cout << "1: create\n 2: write\n 3: read\n4: clear\n\n";
		int choice{};
		std::cin >> choice;

		if (choice == 1)
		{
			f_make(filename);
		}
		if (choice == 2)
		{
			f_write(filename, text);
		}
		if (choice == 3)
		{
			f_read(filename);
		}
		if (choice == 4)
		{
			f_wipe(filename);
		}
		return 0;
	}
}
