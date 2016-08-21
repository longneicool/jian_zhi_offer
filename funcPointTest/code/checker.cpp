#include "checker.h"
#include "gtest/gtest.h"
#include <cstring>
#include <iostream>

Checker::Checker()
{
	_test.a = 1;
	_test.b = 2;
}

void Checker::check()
{
	MapType::iterator it = checkFields.begin();

	while(it != checkFields.end())
	{
		(it->first)(it->second);

		it++;
	}
}

void Checker::checkTestStru(void *expected)
{
	TestStru *expectStr = (TestStru*)expected;
	EXPECT_EQ(expectStr->a, 1);
	EXPECT_EQ(expectStr->b, 2);
}

void Checker::add(Func p, void *expected)
{
	checkFields[p] = expected;
}
