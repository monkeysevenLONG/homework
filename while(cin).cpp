#include<iostream>
using namespace std;

int main()
{
	int num = 0;
	int sum = 0;
	while (cin >> num)//until input is no int 
		sum += num;
	cout << "sum:" << sum << endl;

	return 0;
}