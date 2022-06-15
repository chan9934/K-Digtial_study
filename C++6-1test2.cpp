#include "Actor.h"
#include <iostream>

using namespace std;

int main()
{
	Actor Actors;
	while (1)
	{
		system("cls");
		Actors.Tick();
		Actors.Print();


	}
}