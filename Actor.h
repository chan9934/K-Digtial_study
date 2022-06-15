#pragma once
#include <iostream>

using namespace std;

enum class Definition
{
	Right,
	Left,
	Up,
	Down
};

class Actor
{
public:
	Actor();

	void Tick();
	void Print();



private:
	int x;
	int y;
	Definition mytype;
};
