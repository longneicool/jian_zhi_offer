#include <gtest/gtest.h>
#include "MyQueue.h"

TEST(QueueTest, Test_first_first_out)
{
	MyQueue<int> queue;

	queue.push(1);
	queue.push(3);
	queue.push(4);
	queue.push(5);
	queue.push(6);
	queue.push(7);

	EXPECT_EQ(1, queue.front());
	queue.push(10);
	EXPECT_EQ(1, queue.front());
	queue.pop();
	EXPECT_EQ(3, queue.front());
	queue.pop();
	EXPECT_EQ(4, queue.front());
	queue.pop();
	EXPECT_EQ(5, queue.front());
	queue.pop();
	EXPECT_EQ(6, queue.front());
	queue.pop();
	EXPECT_EQ(7, queue.front());
	queue.pop();
	EXPECT_EQ(10, queue.front());
	queue.pop();
}
