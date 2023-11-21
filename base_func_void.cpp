#include  <iostream>
using namespace std;

class A {
protected:
	int i, j;
public:
	A(void);
	~A(void);
};

class B :public A {
private:
	int b;
public:
	int get_sum(void);
	B(void);
	~B(void);
};

A::A(void)
{
	i = 1;
	j = 2;
	cout << "created A" << endl;
}

A::~A(void)
{
	cout << "destroyed A" << endl;
}

B::B(void)
{
	b = 5;
	cout << "created B" << endl;
}

B::~B(void)
{
	cout << "destroyed B" << endl;
}

int B::get_sum(void)
{
	return i + j + b;
}

int main()
{
	class B b;
	cout << b.get_sum() << endl;

	return 0;
}




