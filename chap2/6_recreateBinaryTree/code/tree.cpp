#include "tree.h"
#include <string>

BinaryTreeNodePtr construct(int *preOrderArray, int *inOrderArray, unsigned len)
{
	if(len == 0 || preOrderArray == NULL || inOrderArray == NULL)
		return NULL;


	unsigned pos = 0xFFFFFFFF;
	for(unsigned i = 0; i < len; i++)
	{
		if(*(inOrderArray + i) == *preOrderArray)
		{
			pos = i;
			break;
		}
	}

	if(pos == 0xFFFFFFFF)
		return NULL;

	BinaryTreeNodePtr node = new BinaryTreeNode;
	node->val = *preOrderArray;
	unsigned leftTreeLen = pos;
	unsigned rightTreeLen = len - pos - 1;

	node->left = construct(preOrderArray + 1, inOrderArray, leftTreeLen);
	node->right = construct(preOrderArray + leftTreeLen + 1, inOrderArray + leftTreeLen + 1, rightTreeLen);

	return node;
}
