#include <iostream>
using namespace std;
class A {
private:
	int num;
	int score;
public:
	A(int x = 1, int y = 1);
	void show() { cout << num << endl << score << endl; }
};

A::A(int x, int y) :num(x), score(y)
{

}
int main()
{
	A a(2, 3);
	A b;
	a.show();
	b.show();
	return 0;
}

