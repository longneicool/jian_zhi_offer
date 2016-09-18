#ifndef HE76B1C90_7414_44BC_82BD_584DB5FB2CE1
#define HE76B1C90_7414_44BC_82BD_584DB5FB2CE1

struct BinaryTreeNode;
typedef struct BinaryTreeNode* BinaryTreeNodePtr;

typedef struct BinaryTreeNode
{
	int val;
	BinaryTreeNodePtr left;
	BinaryTreeNodePtr right;
}BinaryTreeNode;

BinaryTreeNodePtr construct(int *preOrderArray, int *inOrderArray, unsigned len);

#endif /* HE76B1C90_7414_44BC_82BD_584DB5FB2CE1 */
