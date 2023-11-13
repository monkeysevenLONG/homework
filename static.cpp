#include <iostream>
using namespace std;

class counter{
	private:
		static int num;
	public:
		static int get()
		{
			return num;
		}
		void inc()
		{
			num++;
		}
};

int counter::num=10;

void main()
{
	counter a,b;
	cout<<couter::get()<<endl;
	a.inc;
	cout<<couter::get()<<endl;
	b.inc;
	cout<<a.get()<<endl;
	cout<<b.get()<<endl;
	cout<<couter::get()<<endl;
	return;
}