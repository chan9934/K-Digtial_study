#include "Actor.h"
#include <iostream>

using namespace std;

Actor::Actor()
{
	x = 0;
	y = 0;
	mytype = Definition::Right;

}

void Actor::Tick()
{
	
		switch (mytype)
		{
		case Definition::Right:
			x++;
			if(x >= 20)
			{
				mytype = Definition::Up;
			}
			break;

		case Definition::Up:
			y++;
			if(y >= 20)
			{
				mytype = Definition::Left;
			}
			break;

		case Definition::Left:
			x--;
			if(x <= 0)
			{
				mytype = Definition::Down;
			}
			break;

		case Definition::Down:
			y--;
			if(y <= 0)
			{
				mytype = Definition::Right;
			}
			break;
		}
	
}

void Actor::Print()
{
	cout << " (" << x << "," << "y" << "0" << endl;
}
