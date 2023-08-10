#ifndef ARRAY_H
#define ARRAY_H

#include <stdexcept>

template<typename T>
class Array {
public:
	Array<T>() : _size(0) {
		this->arr = new T[0];
	}

	Array<T>(unsigned int _size) : _size(_size) {
		this->arr = new T[_size];
	}

	Array<T>(Array<T> const & copy) : _size(copy._size) {
		this->arr = new T[copy._size];
		for (int i = 0; i < copy._size; i++) {
			this->arr[i] = copy.arr[i];
		}
	}

	~Array<T>() {
		delete [] this->arr;
	}

	Array& operator=(Array<T> const &rhs) {
		if (this != &rhs) {
			delete [] this->arr;
			this->arr = new T[rhs._size];
			for (int i = 0; i < rhs._size; i++) {
				this->arr[i] = rhs.arr[i];
			}
			this->_size = rhs._size;
		}
		return *this;
	}

	T& operator[](unsigned int index) {
		if (index >= this->_size) {
			throw std::out_of_range("array");
		} else {
			return this->arr[index];
		}
	}

	unsigned int size(void) const {
		return this->_size;
	}
private:
	unsigned int _size;
	T* arr;
};

#endif