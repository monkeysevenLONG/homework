#include <iostream>
using namespace std;

class counter {
private:
	int value;
public:
	counter(void);
	~counter(void);
	void inc(void);
	void dec(void);
	int getvalue(void);
};

counter::counter(void)
{
	value = 0;
	cout << "counter initialized\n";
}

counter::~counter(void)
{
	cout << "counter destroyed\n";
}

void counter::inc(void)
{
	value++;
}

void counter::dec(void)
{
	value--;
}

int counter::getvalue(void)
{
	return value;
}


int main(void)
{
	counter counter1, counter2;
	counter1.inc();
	counter2.dec();

	cout << "the value of counter1=" << counter1.getvalue() << "\n";
	cout << "the value of counter1=" << counter2.getvalue()<< "\n";

	return 0;
}

