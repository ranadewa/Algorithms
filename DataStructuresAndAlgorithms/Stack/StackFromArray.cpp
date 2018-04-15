#include <iostream>

using namespace std;


template<class T>
class StackA{

public: 
	StackA(int size):_size(size){

		array = new T[size];
	}

	void push(T value) {

		array[stackPointer++] = value;
	}

	T pop() {

		if (stackPointer < 0 || stackPointer > _size)
		{
			return T();
		}

		return array[--stackPointer];		
	}

private: 
	T* array;
	int stackPointer = 0;
	int _size = 0;

};