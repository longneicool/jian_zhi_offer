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
		(this->*(it->second))(it->first);

		it++;
	}
}

void Checker::checkTestStru(void *expected)
{
	std::cout << "checkTestStru" << std::endl;
}

void Checker::add(Func p, void *expected)
{
	checkFields[expected] = p;
}
