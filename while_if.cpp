#include <iostream>
#define ARRSIZE 5
using namespace std;

int main()
{
	cout << "请输入数字：" << endl;

	float naap[ARRSIZE];
	int i = 0;
	float temp;
	cin >> temp;

	while (ARRSIZE > i && temp >= 0)
	{
		naap[i] = temp;
		i++;
		if (i < ARRSIZE)
			cin >> temp;
	}
	if (i == 0)
		cout << "没有输入值" << endl;

	return 0;
}


