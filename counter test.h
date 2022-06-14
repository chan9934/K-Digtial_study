#pragma once

class Counter
{
public:
	Counter();

	void Counting();
	void reset();
	int getCount()const;
	int memoryCount()const;

private:
	int count;
	
};