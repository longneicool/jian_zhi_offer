#include <gtest/gtest.h>
#include "NodeList.h"
#include "TestLinkList.h"

TEST_F(TestLinkList, check_add)
{
	nodeList.del(1);
	nodeList.antiPrint();
	nodeList.add(1);
	nodeList.add(2);
	nodeList.del(2);
	nodeList.del(2);
	nodeList.del(10);
	nodeList.del(1);
	nodeList.del(3);
	nodeList.del(4);
	nodeList.del(5);
	nodeList.del(1);
}

