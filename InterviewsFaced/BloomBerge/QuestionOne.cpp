/*

Questions :

1. Write a hello world program. 
2. Why do we need a return value in C++ program. 
3. How do you access the return value from the program.
4. Write a function which would reverse a given string. (i.e "Hello World I" => "I dlroW olleH")
5. Can we declare an array such that its begin pointer would be greater that its end pointer
6. Write a functiona that would reverse words of a given string. (i.e. "Hello World I" => "I World Hello")
7. What does std::swap() do? 	

Answers:

1.

#include<iostream>

int main(){
		
	std::cout << "Hello World" << std::endl;
	return 0;
} 


2. To indicate to the kernal of the exit status of the program run. Depending on that OS might take actions.
	There are 2 enums to be that can be used EXIT_SUCCESS, EXIT_FAILIURE.

3. In linux shell >> echo $?

4. Implemented below in void reverseString(string & input){}

5. 

6. Build upon the question. Try to use the first part to solve this.
   Implemented in reverseWords()
*/

#include<iostream>
#include<string>

using std::cout;
using std::endl;  // This is better than writing "using namespace std"
using std::string;
using std::swap;

void reverseString(char* begin, char* end){

	cout << __PRETTY_FUNCTION__<< endl;

	if(begin == end)
		return;

	const char* tpbeg = begin;
	const char* tpend =end;

	while(begin < end){
		swap(*begin++, *end--);
	}

	cout << tpbeg[0] << endl;
}

void reverseString(string & input){

	cout << __PRETTY_FUNCTION__<< endl;

	int size = input.size();

	if(size <= 1)
		return;

	char* begin = &input[0];
	char* end = &input[size -1];

	while(begin < end){
		swap(*begin++, *end--);
	}

	cout << input << endl;
}


void reverseWords(string & input){

cout << __PRETTY_FUNCTION__<< endl;

	int size = input.size();

	if(size <= 1)
		return;

	reverseString(input);

	char* begin = &input[0];

	for (int index = 0; index < size; ++index)
	{
		if (input[index] == ' ')
		{
			reverseString(begin, &input[index-1]);
			begin	= &input[index+1];
		}
	}

	reverseString(begin, & input[size -1]);
}


int main(){

cout << __PRETTY_FUNCTION__<< endl;

	string str = "Hello World I", str2 = str;

	cout << str << endl;

	reverseString(str);

	cout << str << endl;

	cout << str2 << endl;

	reverseWords(str2);

	cout << str2 << endl;

	return 0;
}

