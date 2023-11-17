#include <iostream>
using namespace std;

void disp_num(int);
void disp_num(float);
void disp_num(char*);

int main()
{
	int i = 123;
	float f = 12.3;
	char s[10] = "abcde";

	disp_num(i);
	disp_num(f);
	disp_num(s);

	return 0;
}

void disp_num(int x)
{
	cout << "integeer:" << x << endl;
}

void disp_num(float x)
{
	cout << "float:" << x << endl;
}

void disp_num(char* x)
{
	cout << "string:" << x << endl;
}
