#include <iostream>
using namespace std;

//引用型变量只是取了个别名，他们是同样的值，占同一个的内存地址空间。
//主要用于函数参数传递，相当于c中函数参数的地址传递。
//c++引用相比指针更简洁，方便。

//比较两个交换功能的swap（）函数

/*
void swap(char*x,cha*y)
{
	char ch;
	ch=*x;
	*x=*y;
	*y=ch;
}
*/

void swap(char& x, char& y)
{
	char ch;
	ch = x;
	x = y;
	y = ch;
	return;
}

void main()
{
	char ch1 = 'a', ch2 = 'b';
	cout << "ch1=" << ch1 << " " << "ch2=" << ch2 << endl;
	swap(ch1, ch2);
	cout << "ch1=" << ch1 << " " << "ch2=" << ch2 << endl;
}

