#include <gtest/gtest.h>
#include "Array.h"

extern void merge(Array &a1, const Array &a2);
TEST(MergeArrayTest, normal_test)
{
    int a1[] = {1, 3, 5, 7 ,9, 11, 13};
    int a2[] = {2, 4, 6, 8, 10};
    int expect[] = {1,2,3,4,5,6,7,8,9,10,11,13};

    Array arr1 = Array(a1, sizeof(a1)/sizeof(int));
    Array arr2 = Array(a2, sizeof(a2)/sizeof(int));
    Array expectArr = Array(expect, sizeof(expect)/sizeof(int));

    merge(arr1, arr2);
    arr1.print();
    expectArr.print();
    EXPECT_TRUE(expectArr==arr1);
}

