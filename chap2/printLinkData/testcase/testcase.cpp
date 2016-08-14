#include <gtest/gtest.h>
#include "NodeList.h"
#include "TestLinkList.h"

TEST_F(TestLinkList, check_add)
{
	nodeList.print();
	nodeList.del(1);
	nodeList.print();
	nodeList.add(1);
	nodeList.add(2);
	nodeList.print();
	nodeList.del(2);
	nodeList.print();
}

