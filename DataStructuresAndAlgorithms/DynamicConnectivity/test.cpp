#include "Main.cpp"
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



TEST(QuickUnion, checkRandNum) { 

	QuickUnion qu(9);


	ASSERT_EQ(false, qu.isConnected(1,2));
	ASSERT_EQ(false, qu.isConnected(1,6));
	ASSERT_EQ(false, qu.isConnected(4,7));
	ASSERT_EQ(false, qu.isConnected(1,7));

	qu.connectNodes(2,1);
	qu.connectNodes(3,2);

	ASSERT_EQ(true, qu.isConnected(1,3));

	qu.connectNodes(6,5);
	qu.connectNodes(7,6);
	qu.connectNodes(8,5);

	ASSERT_EQ(true, qu.isConnected(8,5));
	ASSERT_EQ(true, qu.isConnected(8,7));
	ASSERT_EQ(false, qu.isConnected(4,7));
}


TEST(AdvQuickUnion, checkRandNum) { 

	AdvQuickUnion qu(14);


	ASSERT_EQ(false, qu.isConnected(1,2));
	ASSERT_EQ(false, qu.isConnected(1,6));
	ASSERT_EQ(false, qu.isConnected(4,7));
	ASSERT_EQ(false, qu.isConnected(1,7));

	qu.connectNodes(2,1);
	qu.connectNodes(3,2);
	qu.connectNodes(12,3);
	qu.connectNodes(13,2);

	ASSERT_EQ(true, qu.isConnected(1,3));

	qu.connectNodes(6,5);
	qu.connectNodes(7,6);
	qu.connectNodes(8,5);
	qu.connectNodes(8,9);
	qu.connectNodes(10, 9);
	qu.connectNodes(11,10);

	qu.connectNodes(7, 11);

	qu.connectNodes(3, 11);

	ASSERT_EQ(true, qu.isConnected(8,5));
	ASSERT_EQ(true, qu.isConnected(8,7));
	ASSERT_EQ(false, qu.isConnected(4,7));

	qu.print();
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