#include <iostream>
using namespace std;

class Point {
	private:int x; int y;
    public: void set_point(int a, int b) { x = a; y = b; }
	  int get_x() { return x; }
	  int get_y() { return y; }
};

class Circle :public Point {
private:int radius;
public:void set_r(int num) { radius = num; }
	  int get_r() { return radius; }
	  void show_circle(int a, int b, int c);
};

void Circle:: show_circle(int a, int b, int c)
{
	cout << "The center of a circle: (" << a << "," << b << ")" << endl;
	cout << "The radius of a circle: " << c << endl;
}

int main()
{
	class Circle c;
	c.set_point(10, 10);
	c.set_r(5);
	c.show_circle(c.get_x(), c.get_y(), c.get_r());

	return 0;
}



