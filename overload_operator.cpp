#include <iostream>
using namespace std;

class X {
private: int x;
public: X(int a = 10) { x = a; }

	void show() { cout << x << endl; }
	X operator + (X s);
};

X X::operator +(X s)
{
	X temp;
	temp.x = x + s.x;
	return temp;
}

int main()
{
	X x1, x2(150), x3;
	x3 = x1 + x2;
	x3.show();

	return 0;
}