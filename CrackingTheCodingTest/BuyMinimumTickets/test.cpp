#include "Main.cpp"
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


// TEST(testsolution, lessThan3) { 

// 	ASSERT_EQ(6, solution({1, 2, 6}));
// 	ASSERT_EQ(4, solution({1, 25}));
// 	ASSERT_EQ(2, solution({1}));
// 	ASSERT_EQ(0, solution({}));
// }

// TEST(testsolution, greaterThan24) { 

// 	ASSERT_EQ(25, solution({1, 2, 3, 4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24}));
// 	ASSERT_EQ(25, solution({4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,28, 29,30}));
// }



// TEST(testsolution, HKtest) { 

// 	ASSERT_EQ(11, solution({1, 2, 4, 5,7,29, 30}));
// 	ASSERT_EQ(7, solution({5,6,7,8,9,10}));

// 	ASSERT_EQ(14, solution({5,6,7,8,9,10, 12,13,14,15}));

// 	ASSERT_EQ(16, solution({5,6,7,8,9,10, 21,27,28,29,30}));
// }


// TEST(solutionRecursive, lessThan3) { 

// 	ASSERT_EQ(6, solutionRecursive({1, 2, 6}));
// 	ASSERT_EQ(4, solutionRecursive({1, 25}));
// 	ASSERT_EQ(2, solutionRecursive({1}));
// 	ASSERT_EQ(0, solutionRecursive({}));
// }

// TEST(solutionRecursive, greaterThan24) { 

// 	ASSERT_EQ(25, solutionRecursive({1, 2, 3, 4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24}));
// 	ASSERT_EQ(25, solutionRecursive({4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,28, 29,30}));
// }



TEST(solutionRecursive, HKtest) { 

	ASSERT_EQ(7, solutionRecursive({1, 2, 4, 5	}));
	// ASSERT_EQ(7, solutionRecursive({5,6,7,8,9,10}));

	// ASSERT_EQ(14, solutionRecursive({5,6,7,8,9,10, 12,13,14,15}));

	// ASSERT_EQ(16, solutionRecursive({5,6,7,8,9,10, 21,27,28,29,30}));
}

/*
TEST(InitalValueTest, checkRandNum) { 

	interval_map<int,char> testMap('Z');

	int count = 1000;

	for (int i = 0; i < count; ++i)
	{
		ASSERT_EQ('Z', testMap[rand()]);
	}
}
*/