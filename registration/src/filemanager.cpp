#include "includes.h"


int f_make(std::string filename)
{
	std::ofstream myfile;
	myfile.open(filename);
	myfile.close();


	return 0;
}


int f_write(std::string filename, std::string text)
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
		std::cout << "Unable to access file: '" << filename << "'\n";
	}
}

int f_read(std::string filename)		//++when someone registers they are given an ID number
{										//ID number being the line their info is stored on.
	std::string line;
	std::ifstream myfile(filename);
	if (myfile.is_open())
	{
		while (std::getline(myfile, line))
		{
			std::cout << line << std::endl;
		}
	}
	else
	{
		std::cout << "Unable to access file: '" << filename << "'\n";
	}
	return 0;
}

int f_wipe(std::string filename)
{
	std::ofstream myfile;
	myfile.open(filename);
	if (myfile.is_open())
	{
		myfile.clear();
		myfile.close();
	}
	else
	{
		std::cout << "Unable to access file: '" << filename << "'\n";
	}
	return 0;
}