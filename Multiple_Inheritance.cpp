#include <iostream>
using namespace std;

class A {
protected:
	float fa;
public:
	A(float a);
	~A(void) { cout << "destroy A." << endl; }
};

class B {
protected:
	float fb;
public:
	B(float b);
	~B(void) { cout << "destroy B." << endl; }
};

class C :public A, public B {
private:
	float fc;
public:
	C(float a,float b,float c);
	~C(void) { cout << "destroy C." << endl; }
	float sum_fa_fb_fc(void);
};

A::A(float a)
{
	cout << "initializing A.\n";
		fa = a;
}

B::B(float b)
{
	cout << "initializing B.\n";
		fb = b;
}
C::C(float a,float b, float c):A(a), B(b)
{
	cout << "initializing C." << endl;
	fc = c;
}	

float C::sum_fa_fb_fc(void)
{
	return fa + fb + fc;
}

void main(void)
{
	C c(111, 222, 333);
	cout << c.sum_fa_fb_fc() << endl;

}

