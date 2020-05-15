#include <stdio.h>
#include <iostream>

#include "system.h"


void MyPart::info()
{
	std::cout << "First Static Method in Class.\n" << std::endl;
}


int main() {
	MyPart::info();

	return EXIT_SUCCESS;
}