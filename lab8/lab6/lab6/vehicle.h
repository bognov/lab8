#include <iostream>
using namespace std;

class vehicle
{
public:
	int length;
	int width;
	int hight;
	int weight;
	int maxspeed;

	vehicle()
	{
	}

	vehicle(int a, int b, int c, int d, int f)
	{
		length = a;
		width = b;
		hight = c;
		weight = d;
		maxspeed = f;
	}

	void getinfo()
	{
		cout << length << endl;
		cout << width << endl;
		cout << hight << endl;
		cout << maxspeed << endl;
		cout << weight << endl << endl;
	}

	friend ostream& operator << (ostream& output, vehicle x)
	{
		return output << x.length << endl << x.width << endl << x.hight << endl << x.maxspeed << endl << x.weight << endl << endl;
	}

	friend vehicle operator *(vehicle x, int k)
	{
		return vehicle(x.length * k, x.width * k, x.hight * k, x.maxspeed * k, x.weight * k);
	}
	
};