#include <iostream>
using namespace std;

class Complex {
private: float real;
	   float imag;
public:	friend Complex operator + (Complex& a, Complex& b);
	  void show(void);
	  void assign(float r, float i);
};

Complex operator + (Complex& a, Complex& b)
{
	Complex temp;
	temp.real = a.real + b.real;
	temp.imag = a.imag + b.imag;

	return temp;
}

void Complex::show(void)
{
	cout << real << "+" << imag << "i" << endl;
}

void Complex::assign(float r, float i)
{
	real = r;
	imag = i;
}

int main()
{
	Complex c1, c2, c;
	c1.assign(1.0, 2.0);
	c2.assign(3.0, 4.0);
	c = c1 + c2;
	c.show();

	return 0;
}