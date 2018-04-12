#include "Main.cpp"
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


TEST(reverseCharBuffer, initTest) { 

	char buffer[20];
	buffer[0] = '\0';

	strncpy(buffer, "Hello World", 20);

	reverseCharBuffer(buffer);

	ASSERT_STREQ(buffer, "dlroW olleH");
}


TEST(reverseSolution, initTest) { 

	char buffer[20];
	buffer[0] = '\0';

	strncpy(buffer, "Hello World", 20);

	reverseSolution(buffer);

	ASSERT_STREQ(buffer, "dlroW olleH");
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