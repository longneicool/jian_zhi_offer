#ifndef H833DB022_47C5_4C73_95FB_8F894CCFD593
#define H833DB022_47C5_4C73_95FB_8F894CCFD593

#include "gtest/gtest.h"

struct TestSortAlgFixture : testing::Test
{
	TestSortAlgFixture();

protected:
	int array[10];
	int sortedArray[10];
};

#endif
