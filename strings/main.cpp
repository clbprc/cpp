#include <iostream>
#include <string>      // for std::string
#include <string_view> // for std::string_view
#include <windows.h>

#include "func.h"



int main()
{
    std::string name1{ getName() };
    int age1{ getAge() };
    
    
    std::string name2{ getName() };
    int age2{ getAge() };
    
    Profile(name1, age1, name2, age2);


    return 0;
}