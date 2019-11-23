#include <iostream>
#include "Time.h"

int main()
{
	Time one(0, 10, 21), two(0, 10, 28);

	if (one <= two) {
		std::cout << "Duree1 is larger";
	}
	else {
		std::cout << "Duree1 is not larger";
	}

	return 0;
}
