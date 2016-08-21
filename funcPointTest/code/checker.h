#ifndef HE0549824_0130_4F92_BDFA_B687F9EEE80B
#define HE0549824_0130_4F92_BDFA_B687F9EEE80B

#include <map>

using std::map;

struct TestStru
{
	int a;
	int b;
};

struct Checker;
typedef void (*Func)(void *expected);

struct Checker
{
	Checker();

	typedef map<Func, void*> MapType;
	void add(Func p, void *expected);

	void check();

	static void checkTestStru(void *expected);
private:
	MapType checkFields;

	TestStru _test;
};




#endif /* HE0549824_0130_4F92_BDFA_B687F9EEE80B */
