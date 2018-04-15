#include "Main.cpp"
#include <gtest/gtest.h>

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



TEST(DisxtrasTwoStack, firstTest) { 

	MathEvaluator evaluator;

	ASSERT_EQ(8, evaluator.evaluate("(3+5)"));

	ASSERT_EQ(10, evaluator.evaluate("((3+5) + 2)"));


	ASSERT_EQ(15, evaluator.evaluate("(3*5)"));

	ASSERT_EQ(101, evaluator.evaluate("( 1 + ( ( 2 + 3) * ( 4 * 5)))"));
}
