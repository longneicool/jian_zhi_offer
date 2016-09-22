#include "gtest/gtest.h"
#include "CMyString.h"

TEST(CMyStringTest, is_cmystring_work)
{
    CMyString c1("test");
    CMyString c2;
    c2=c1;

    EXPECT_STREQ(c1.c_str(), c2.c_str());
}
