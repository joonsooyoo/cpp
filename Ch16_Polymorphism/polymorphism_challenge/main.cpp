#include <iostream>
#include "Account.h"
#include "Saving.h"
#include "Checking.h"
#include "Trust.h"

int main() {

	Account joon {"JS", 500};
	std::cout << joon << std::endl;

	Saving bin {"Bin", 300, 5};
	std::cout << bin << std::endl;

	Checking jae {"Jang", 50};
	std::cout << jae << std::endl;

	Trust dt {"Moon"};
	std::cout << dt << std::endl;
	dt.withdraw(10);
	std::cout << dt << std::endl;

	return 0;
}