#include <iostream>
using namespace std;

class seconds {
private:
	int sec;
public:
	seconds(int h, int m, int s)
	{
		sec = 3600 * h + 60 * m + s;
	}
	seconds(int m, int s)
	{
		sec = 60 * m + s;
	}
	seconds(int s)
	{
		sec = s;
	}

	void aaa(void)
	{
		cout << "seconds:" << sec << endl;
	}
};

int main()
{
	seconds c1(20);
	c1.aaa();
	seconds c2(1, 1);
	c2.aaa();
	seconds c3(1.,1,1);
	//c3.aaa();

	return 0;
}

