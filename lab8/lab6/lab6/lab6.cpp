// lab6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "List.h"
#include "vehicle.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	list<vehicle> li;
	vehicle A(3, 2, 1, 300, 200);
	li.add(A);
	vehicle B(4, 3, 2, 350, 150);
	li.add(B);
	vehicle C(5, 4, 3, 400, 100);

	li + C;

	li.show();

	li--;

	li.show();

	li.dbl(li);
	li.show();

	list<int> li2;
	li2.add(2);
	li2.add(3);
	int c = 5;
	li2 + c;

	li2.show();
	 
	li2.dbl(li2);

	li2.show();

	return 0;
}


