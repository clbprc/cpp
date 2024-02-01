#pragma once
std::string getName()
{
	std::string a{};
	std::cout << "Enter your name: ";
	std::getline(std::cin >> std::ws, a);
	return a;

}

int getAge()
{
	int age{};
	std::cout << "Enter your age: ";
	std::cin >> age;
	return age;
}

void Profile(std::string n1, int a1, std::string n2, int a2)
{
	//std::cout << "[DEBUG] Person 1: " << n1 << std::endl << "Age: " << a1 << std::endl << std::endl;
	//std::cout << "[DEBUG] Person 2: " << n2 << std::endl << "Age: " << a2 << std::endl << std::endl;

	if (a1 > a2)
	{
		std::cout << n1 << " (age: " << a1 << ")" << " is older than " << n2 << " (age: " << a2 << ")";
	}
	else
	{
		std::cout << n2 << " (age: " << a2 << ")" << " is older than " << n1 << " (age: " << a1 << ")";
	}

}