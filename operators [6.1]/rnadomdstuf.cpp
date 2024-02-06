#include <iostream>

int main()
{


	int x{ 1 };
	int y{ 5 };
	int z{ 8 };

	printf("x = %d, y = %d, z = %d\n\n", x, y, z);	//make sure they are defined

	x = (y *= z);									

	printf("x = %d, y = %d, z = %d\n\n", x, y, z);	//figuring out *=

	y = 5;											//reinitializing y as 5

	x = (y * z);									//comparing = with *=
	
	printf("x = %d, y = %d, z = %d\n\n", x, y, z);	//compare results


}