#pragma once
#include <string>
#include <string_view>

std::string getAnimal1()
{
    std::cout << "Enter First Animal: ";
    std::string a{};
    std::getline(std::cin >> std::ws, a);
    return a;
}

std::string getAnimal2()
{
    std::cout << "Enter second Animal: ";
    std::string b{};
    std::getline(std::cin >> std::ws, b);
    return b;
}

std::string prompt(std::string a1, std::string a2)
{
    std::cout << "a " << a1 << " and " << a2 << " facing off realistic" << std::endl << std::endl;
    std::cout << "a " << a1 << " and " << a2 << " facing off with " << a2 << " in the mouth of " << a1;
    return a1;
}
