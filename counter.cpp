#include <iostream>
#include "counter test.h"
using namespace std;

Counter::Counter()
{
	count = 0;
}

void Counter::Counting()
{
	count++;
}
void Counter::reset()
{
	count = 0;
}

int Counter::getCount()const
{
	return count;
}

int Counter::memoryCount()const
{
	return count;
}
