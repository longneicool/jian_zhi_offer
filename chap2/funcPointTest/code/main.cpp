#include <iostream>
#include <map>
#include "checker.h"

int main(int argc, char** argv)
{
	TestStru expected;
	expected.a = 1;
	expected.b = 2;

	Checker chec;
	Func pfu = &Checker::checkTestStru;
	chec.add(pfu, (void*)&expected);
	chec.check();

	return 0;
}
