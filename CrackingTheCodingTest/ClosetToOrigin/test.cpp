#include "Main.cpp"
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



TEST(InitalValueTest, checkRandNum) { 

	vector<vector<int>> pointsArray = {{1,2}, {4,8}, {12, 13} , {1, 1}, {100,  200}, {0,0}};

	getClosetsPoints(pointsArray, 3);

	//	ASSERT_EQ('Z', testMap[rand()]);
}