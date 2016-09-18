#include "gtest/gtest.h"
#include "tree.h"
#include "testfixture.h"

TEST_F(BinaryTreeCreaterTest, test_normal_case)
{
	int preOrderArray[] = {1, 2, 4, 7, 3, 5, 6, 8};
    int inOrderArray[] = {4, 7, 2, 1, 5, 3, 8, 6};

	BinaryTreeNodePtr head = construct(preOrderArray, inOrderArray, sizeof(inOrderArray)/sizeof(int));

	int i = 0;
	//EXPECT_EQ(1, head->val);
}
