#include "Main.cpp"
#include <gtest/gtest.h>

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



TEST(GraphTest, edgeCount) { 

	Graph g(10);

	g.addEdge(2,3);
	g.addEdge(5,3);
	ASSERT_EQ(2, g.edgeCount());
}

TEST(GraphTest, edgeCountDuplicate) { 

	Graph g(10);

	g.addEdge(2,3);
	g.addEdge(5,3);
	g.addEdge(2,3);
	ASSERT_EQ(2, g.edgeCount());
}

TEST(GraphTest, iterateGraph) { 

	Graph g(10);

	g.addEdge(2,3);
	g.addEdge(5,3);
	g.addEdge(7,3);
	g.addEdge(7,1);
	g.addEdge(0,3);

	ASSERT_EQ(5, g.edgeCount());

	 auto iter = g.getAdjacencyList(3);
	
	// [3] -> 0 -> 2 -> 5 -> 7 
	// Iterator is first derenced value take then iter is incremented

	ASSERT_EQ(0, *iter++); 
	ASSERT_EQ(2, *iter++);
	ASSERT_EQ(5, *iter++);  
	ASSERT_EQ(7, *iter); 
}

TEST(PathTest, initialTet) { 

	Graph g(10);

	g.addEdge(0,6);
	g.addEdge(0,2);
	g.addEdge(0,1);
	g.addEdge(0,5);
	g.addEdge(6,4);
	g.addEdge(5,4);
	g.addEdge(5,3);
	g.addEdge(3,4);
	g.addEdge(7,8);

	Path  p(&g, 0);

	ASSERT_EQ(9, g.edgeCount());


	ASSERT_EQ(true, p.hasPathTo(6));

	ASSERT_EQ(true, p.hasPathTo(3));

	ASSERT_EQ(false, p.hasPathTo(8));
}