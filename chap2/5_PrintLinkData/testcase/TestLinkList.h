#ifndef H5388F6CA_A05F_46C5_98FC_B6BBF9AA36CC
#define H5388F6CA_A05F_46C5_98FC_B6BBF9AA36CC

#include <gtest/gtest.h>
#include "NodeList.h"


struct TestLinkList : ::testing::Test
{
	TestLinkList()
	{
		nodeList.add(1);
		nodeList.add(2);
		nodeList.add(3);
		nodeList.add(4);
		nodeList.add(5);
	}

protected:
	NodeList<int> nodeList;
};




#endif /* H5388F6CA_A05F_46C5_98FC_B6BBF9AA36CC */
