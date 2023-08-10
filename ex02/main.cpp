#include "Array.hpp"
#include <iostream>

int main() {
	// Array<int> emptyArr;
	// std::cout << emptyArr[0] << std::endl;

	std::cout << "-------CREATING ARRAY OF DOUBLES WITH SIZE 5-------" << std::endl;
	Array<double> arr(5);

	std::cout << "-------PRITNTING ITS ELEMENTS-------" << std::endl;
	for (unsigned int i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << std::endl;
	}

	std::cout << "-------CHANGING THE VALUES AND PRINTING-------" << std::endl;
	double temp = 0.1;
	for (unsigned int i = 0; i < arr.size(); i++) {
		arr[i] = temp;
		temp += 0.1;
	}
	for (unsigned int i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << std::endl;
	}
	// std::cout << arr[6] << std::endl;

	std::cout << "-------CREATING ARRAY OF STRINGS WITH SIZE 3-------" << std::endl;
	Array<std::string> names(3);

	std::cout << "-------PRITNTING ITS ELEMENTS-------" << std::endl;
	for (unsigned int i = 0; i < names.size(); i++) {
		std::cout << names[i] << std::endl;
	}


	std::cout << "-------CHANGING THE VALUES AND PRINTING-------" << std::endl;
	names[0] = "Mike";
	names[1] = "Eugene";
	names[2] = "Alice";

	for (unsigned int i = 0; i < names.size(); i++) {
		std::cout << names[i] << std::endl;
	}
}