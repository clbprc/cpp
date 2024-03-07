#pragma once
#include "includes.h"


int boot();
int isNewUser(std::string);
int settings();
int standby();
int setup();

namespace test
{
	int registration();
}
