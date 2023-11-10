#include <iostream>
using namespace std;

class A {
private:
	int a;
public:
	void set_a(int x)
	{
		a = x;
	}

	int get_a(void)
	{
		return a;
	}

	friend void square(A& y);

};

void square(A& m)
{
	cout << m.a * m.a << endl;
}

int main(void)
{
	A obj;;
	obj.set_a(10);
	square(obj);
	cout << obj.get_a() << endl;

	return 0;
}