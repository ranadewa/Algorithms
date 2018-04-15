#include "Main.cpp"
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


TEST(testhowManyAgentsToAdd, initialTest) { 

	vector < vector<int> > callsTimes = {{2000, 2050}, {2200, 2250}, {2300, 2350}};

	int max = howManyAgentsToAdd(1, callsTimes);

	ASSERT_EQ(1, max);

}

TEST(testhowManyAgentsToAdd, twoAgents) { 

	vector < vector<int> > callsTimes = {{2000, 2050}, {2025, 2250}, {2300, 2350}};

	int max = howManyAgentsToAdd(1, callsTimes);

	ASSERT_EQ(2, max);
}

TEST(testhowManyAgentsToAdd, threeAgents) { 

	vector < vector<int> > callsTimes = {{2000, 2050}, {2025, 2050}, {2030, 2040}};

	int max = howManyAgentsToAdd(1, callsTimes);

	ASSERT_EQ(3, max);

}

TEST(testhowManyAgentsToAdd, threeAgents_) { 

	vector < vector<int> > callsTimes = {{2000, 2050}, {2025, 2050}, {2030, 2040}, {2049, 2060}};

	int max = howManyAgentsToAdd(1, callsTimes);

	ASSERT_EQ(3, max);

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