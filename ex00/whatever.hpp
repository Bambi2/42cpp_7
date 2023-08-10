#ifndef WHATEVER_H
#define WHATEVER_H

template<typename T>
void swap(T& first, T& second) {
	T temp = first;
	first = second;
	second = temp;
}

template<typename T>
T const & min(T const & first, T const & second) {
	return first < second ? first : second;
}

template<typename T>
T const & max(T const & first, T const & second) {
	return first > second ? first : second;
}

#endif