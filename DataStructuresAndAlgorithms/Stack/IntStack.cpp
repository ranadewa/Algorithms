#include <list>
#include<iostream>
#include <iterator>




class IntStackIterator{

	public:
    // Iterator traits, previously from std::iterator.
    using value_type = int;
    using difference_type = std::ptrdiff_t;
    using pointer = int*;
    using reference = int&;
    using iterator_category = std::bidirectional_iterator_tag;

    // Default constructible.
    IntStackIterator() = default;

    explicit IntStackIterator(list<int>* originalStack) {
    	nodes = originalStack;	
    };

    // Dereferencable.
    reference operator*() const {
    	
    }


private: 

    using Nodes = list<int>*;

   // Our sorted nodes.
    Nodes nodes;

    // The node this iterator references.
   int  current { 0 };

};


class IntStack{

	public :
	IntStack(){
		stack.clear();
	}

	void push(int value){

		stack.push_front(value);
	}

	int pop() {

		int value = stack.front();
		stack.pop_front();

		return value;
	}

	using iterator = IntStackIterator;

	iterator begin()   {
		 return IntStackIterator(&stack);
	};
    iterator end() {
    	return IntStackIterator(nullptr);
    }

	private:

	list<int> stack;
};


