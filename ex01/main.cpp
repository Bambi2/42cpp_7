#include "iter.hpp"
#include <string>

int main() {
	int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::string names[] = {"Mac", "Joe", "Cole", "Steve"};

	iter(nums, 9, print);
	iter(names, 4, print);
}