#include <iostream>
#include "../Stack/Stack.cpp"

using namespace std;

class MathEvaluator{


public: 

	MathEvaluator(){
	}

	double evaluate(const string & input){

		cout << "Inside " << endl;

		int size = input.size();

		for (int i = 0; i < size; ++i)
		{

			cout << input[i] << endl;
			if (input[i] == '+')
			{
					operationStack.push('+');	
			}
			else if (input[i] == '*')
			{
					operationStack.push('*');
			}	
			else if (input[i] == '-')
			{
					operationStack.push('-');
			}
			else if(input[i] == '/')
			{
					operationStack.push('/');
			}
			else if(input[i] == '('  || input[i] == ' ')
			{
					// ignore
			}
			else if (input[i] == ')')
			{
				// Pop operation stack, operand stack do the computation 

				int value = processStacks();
				operandStack.push(value);
			}
			else
			{
				int value = input[i] - '0';
				operandStack.push(value);
			}
		}

		return operandStack.pop();
	}

private: 

	Stack<int> operandStack;
	Stack<char>	  operationStack;

	int processStacks(){

		int first = operandStack.pop();
		int second = operandStack.pop();

		char operation = operationStack.pop();

		cout << first << operation  <<  second << endl;

		int result = 0;

		if (operation == '+')
		{
			result = first + second;
		}
		else if (operation == '-')
		{
			result = first - second;	
		}
		else if (operation == '*')
		{
			result = first * second;
		}
		else
		{
			result = first / second;
		}

		return result;
	}
};

