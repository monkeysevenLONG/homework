#include <iostream>
using namespace std;

class A {
private: int a, b;
public: A(int x, int y);
	  ~A();
	  void show() {
		  cout << a << " " << b << endl;
	  }
};
	  A::A(int x, int y)
	  {
		  cout << "constructing\n";
		  a = x;
		  b = y;
	  }

	  A::~A()
	  {
		  cout << "destructing."<<endl;
	  }

	  int main()
	  {
		  A* ptr;
		  ptr = new A(11, 12);
		  if (!ptr)
		  {
			  cout << "allocating failure!" << endl;
			  return 0;
		  }

		  ptr->show();
		  delete ptr;
		  return 0;
	  }
