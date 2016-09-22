#include <gtest/gtest.h>
#include <iostream>

extern void replaceSpace(char* str);

TEST(MoveTest, test_null_pointer)
{
   replaceSpace(NULL); 
}

TEST(MoveTest, test_move_result)
{
    char str[] = {"I am a good boy"};
    char expectStr[] = {"0a%20good%20boy"};
    replaceSpace(str);

    printf("expect:%s\n", expectStr);

    EXPECT_STREQ(expectStr, str);
}

