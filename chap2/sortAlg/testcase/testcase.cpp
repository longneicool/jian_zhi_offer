#include "TestSortAlgFixture.h"
#include "SortAlg.h"

TEST_F(TestSortAlgFixture, test_insert_sort)
{
	insertSort(array, 10);

	for(int i = 0; i < 10; i++)
	{
		EXPECT_EQ(sortedArray[i], array[i]);
	}
}
