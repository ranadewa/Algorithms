#include "Main.cpp"
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


TEST(isPermutation, initTests) { 


	ASSERT_EQ(true, isPermutation("ABC", "BCA"));

	ASSERT_EQ(false, isPermutation("ABC", "BCAB"));

	ASSERT_EQ(true, isPermutation("ABC=-0", "B=C-A0"));

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