#include <list>
#include<iostream>

using namespace std;

template <class T>
class Stack{

	public :
	Stack(){
		stack.clear();
	}

	void push(T value){

		stack.push_front(value);
	}

	T pop() {

		T value = stack.front();
		stack.pop_front();

		return value;
	}

	private:

	list<T> stack;
};