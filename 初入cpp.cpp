#include  <iostream>
using namespace std;

int a;

void main()
{
	a = 10;
	int a = 20;
	cout << "a in main =" << a<<endl;
	::a = a * ::a;
	cout << "::a="<<::a<<endl;
		return;
}