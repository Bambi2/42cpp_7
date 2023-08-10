#ifndef ITER_H
#define ITER_H

#include <iostream>

template<typename T>
void iter(T* arr, int length, void (*func)(T&)) {
	for (int i = 0; i < length; i++) {
		func(arr[i]);
	}
}

template<typename T>
void print(T& p) {
	std::cout << p << std::endl;
}

#endif