#include <iostream>
using namespace std;


template <class X> class list
{
	struct abc
	{
		X a;
		abc* next;
	};

public:
	abc *head, *end;
	int num = 0;

	list()
	{
		head = NULL;
		end = NULL;
	}

	void addInBegin(X value)
	{
		abc *temp = new abc;
		temp->next = head;
		temp->a = value;
		head = temp;
		if (end == NULL)
			end = head;
		num++;
	}

	void addInEnd(X value)
	{
		abc *temp = new abc;
		if (end == NULL) {
			temp->a = value;
			end = temp;
		}
		else {
			end->next = temp;
			temp->a = value;
			temp->next = NULL;
			end = temp;
		}
		num++;
	}

	friend void operator +(list a, X x)
	{
		a.add(x);
	}


	void operator --(int)
	{
		abc *temp = head;
		for (int i = 0; i < num - 1; i++)
			temp = temp->next;
		abc *node = temp->next;
		temp->next = temp->next->next;
		delete node;
	}

	friend int operator != (const list& x, const list& y)
	{
		abc *temp1 = new abc;
		temp1->next = x.head;
		abc *temp2 = new abc;
		temp2->next = y.head;
		while (temp1)
		{
			if (temp1->a != temp2->a)
				return 1;
			else
			{
				temp1 = temp1->next;
				temp2 = temp2->next;
			}
		}
		return 2;
	}

	int &operator [](int k)
	{
		abc *temp = head;
		for (int i = 0; i < k - 1; i++)
			temp = temp->next;
		return temp->a;
	}

	void list::add(X value)
	{
		if (head == 0)
		{
			addInBegin(value);
		}
		else
		{
			addInEnd(value);
		}
	}

	void list::show()
	{
		abc *temp = head;
		cout << "List: " << endl;
		while (temp != NULL)
		{
			cout << temp->a << endl;
			temp = temp->next;
		}
		cout << endl;
	}

	template<class X> void dbl(X li)
	{
		abc *temp = li.head;
		for (int i = 0; i < li.num; i++)
		{
			temp->a = (temp->a) * 2;
			temp = temp->next;
		}
	}
};