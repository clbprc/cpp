#include <iostream> // for console i/o
#include <fstream> // for file i/o
#include <string> // to write strings
#include <windows.h> // for Sleep

//using std::endl because my keyboard doesnst have a backslash...


int fileWrite(std::string text, std::string filename)
{
	std::ofstream myfile;
	myfile.open(filename);
	if (myfile.is_open())
	{
		myfile << text;
		myfile.close();
		return 0;
	}
	else
	{
		myfile << "Unable to open file";
		Sleep(3000);
		return 0;
	}
}

int fileRead(std::string filename)
{
	std::string line;
	std::ifstream myfile(filename);
	if (myfile.is_open())
	{
		while (std::getline(myfile, line))
		{
			std::cout << line << '\n';
		}
		myfile.close();
	}

	else
	{
		std::cout << "Unable to open file";
		Sleep(3000);
	}
	return 0;
}

int fileClear(std::string filename)
{
	std::ofstream myfile;
	myfile.open(filename);
	if (myfile.is_open())
	{
		myfile.clear();
		myfile.close();
		return 0;
	}
	else
	{
		myfile << "Unable to clear file";
		Sleep(3000);
		return 0;
	}
}

int main()
{
	std::cout << "[1] Write" << std::endl << "[2] Read" << std::endl << "[3] Clear" << std::endl << std::endl << std::endl;
	int choice{};
	std::cin >> choice;
	
	if (choice == 1)
	{
		std::cout << "Name the file: " << std::endl;		//this code is being skipped 
		Sleep(3000);
		std::string filename{};
		std::getline(std::cin >> std::ws, filename);
		std::cout << std::endl << std::endl;
		
		
		std::cout << "what text do you want inside the file? " << std::endl;
		std::string input{};
		std::getline(std::cin >> std::ws, input);
		std::cout << std::endl << std::endl;


		std::cout << "writing to file..." << std::endl;
		Sleep(1000);
		fileWrite(input, filename);
		std::cout << "complete" << std::endl << std::endl;
		Sleep(30000);
	}
	if (choice == 2)
	{
		std::cout << "what file do you want to read? " << std::endl;
		std::string filename{};
		std::getline(std::cin >> std::ws, filename);
		std::cout << std::endl << std::endl;


		fileRead(filename);
		Sleep(3000);
		std::cout << std::endl << "complete";
		Sleep(30000);
	}
	if (choice == 3)
	{
		std::cout << "what file do you want to clear? " << std::endl; 
		std::string filename{};
		std::getline(std::cin >> std::ws, filename);
		std::cout << std::endl << std::endl;

		fileClear(filename);
		std::cout << std::endl << "complete";
		Sleep(30000);
	}
	else
	{
		std::cout << "invalid input" << std::endl << std::endl;
		Sleep(3000);
	}
}
