#include "Main.cpp"
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



TEST(testStack, checkRandNum) { 

	Stack<int> stack;

	stack.push(1);
	stack.push(2);
	stack.push(3);


	ASSERT_EQ(3, stack.pop());

	ASSERT_EQ(2, stack.pop());

	stack.pop();
	//stack.pop();
}

TEST(testStackA, checkRandNum) { 

	StackA<int> stack(10);

	stack.push(1);
	stack.push(2);
	stack.push(3);


	ASSERT_EQ(3, stack.pop());

	ASSERT_EQ(2, stack.pop());

	stack.pop();
	//stack.pop();
}
