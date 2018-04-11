#include "Main.cpp"
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


TEST(testhasUniqueChars, noDataStructureUsed) { 

	ASSERT_EQ(true, hasUniqueChars(string("A")));
	ASSERT_EQ(true, hasUniqueChars(string("ABCDEFGH")));
	ASSERT_EQ(false, hasUniqueChars(string("ABCDEFGHA")));
	ASSERT_EQ(false, hasUniqueChars(string("ABCDEFGHH")));
	ASSERT_EQ(false, hasUniqueChars(string("ABCDEFGH123456789F")));
	ASSERT_EQ(true, hasUniqueChars(string("ABCDEFGH123456789")));
}

TEST(testhasUniqueChars, usingHashTable) { 

	ASSERT_EQ(true, hasUniqueChars(string("A")));
	ASSERT_EQ(true, hasUniqueCharsWithHashTable(string("ABCDEFGH")));
	ASSERT_EQ(false, hasUniqueCharsWithHashTable(string("ABCDEFGHA")));
	ASSERT_EQ(false, hasUniqueCharsWithHashTable(string("ABCDEFGHH")));
	ASSERT_EQ(false, hasUniqueCharsWithHashTable(string("ABCDEFGH123456789F")));
	ASSERT_EQ(true, hasUniqueCharsWithHashTable(string("ABCDEFGH123456789")));
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