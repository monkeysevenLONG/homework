#include <iostream>
using namespace std;

class Rectangle {
protected:
	float rect_x;
	float rect_y;
public:
	Rectangle(float x, float y);
	~Rectangle()
	{
		cout << "destroy Rectangle!"<<endl;
	}
	float area()
	{
		return rect_x * rect_y;
	}
};
Rectangle::Rectangle(float x, float y)
{
	rect_x = x;
	rect_y = y;
	cout << "initializing Rectangle."<<endl;
}

class Cube :public Rectangle {
private:
	float height;
public:
	Cube(float x, float y, float h);
	~Cube() { cout << "destroy Cube." << endl; }
	float cubage() { return  rect_x * rect_y * height; }
};
Cube::Cube(float x, float y, float h) :Rectangle(x, y)
{
	height = h;
	cout << "initializing cube." << endl;
}

int main()
{
	Cube c(4, 2, 3);
	cout << "cube=" << c.cubage() << endl;

	return 0;
}
