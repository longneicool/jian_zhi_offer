#include "gtest/gtest.h"
#include "TestSortAlgFixture.h"
#include "SortAlg.h"

TEST_F(TestSortAlgFixture, test_insert_sort)
{
    int array[] = {11, 9, 20, 100, 1, 3, 7, 11, 29, 5};
    int sortedArray[] = { 1, 3, 5, 7, 9, 11, 11, 20, 29, 100};
	insertSort(array, 10);

	for(int i = 0; i < 10; i++)
	{
		EXPECT_EQ(sortedArray[i], array[i]);
	}
}

TEST_F(TestSortAlgFixture, test_insert_sort_with_allsame_array)
{
    int array[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int sortedArray[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	insertSort(array, 10);

	for(int i = 0; i < 10; i++)
	{
		EXPECT_EQ(sortedArray[i], array[i]);
	}
}

TEST_F(TestSortAlgFixture, test_shell_sort)
{
    int array[] = {11, 9, 20, 100, 1, 3, 7, 11, 29, 5};
    int sortedArray[] = { 1, 3, 5, 7, 9, 11, 11, 20, 29, 100};

	shellSort(array, 10);
	for(int i = 0; i < 10; i++)
	{
		EXPECT_EQ(sortedArray[i], array[i]) << "i: " << i << std::endl;
	}
}

TEST_F(TestSortAlgFixture, test_quick_sort)
{
    int array[] = {11, 9, 20, 100, 1, 3, 7, 11, 29, 5};
    int sortedArray[] = { 1, 3, 5, 7, 9, 11, 11, 20, 29, 100};

	quickSort(array, 10);
	for(int i = 0; i < 10; i++)
	{
		EXPECT_EQ(sortedArray[i], array[i]) << "i: " << i << std::endl;
	}
}
