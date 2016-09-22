#include <gtest/gtest.h>
#include "test3.h"

TEST(ArrayTest, iii)
{
    int Array[] = {
    1, 2, 8, 9,
    2, 4, 9 ,22,
    3, 8, 10, 27,
    4, 10, 15, 100};

    EXPECT_TRUE(find(Array, 4, 4, 22));
    EXPECT_TRUE(find(Array, 4, 4, 1));
    EXPECT_TRUE(find(Array, 4, 4, 8));
    EXPECT_FALSE(find(Array, 4, 4, 11));
    EXPECT_FALSE(find(Array, 4, 4, 0));
    EXPECT_TRUE(find(Array, 4, 4, 4));
    EXPECT_TRUE(find(Array, 4, 4, 100));
}

