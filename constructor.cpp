#include <iostream>

#include <string>

using namespace std;

class Student {
private:
	char* name;
	int score;
public:
	Student(char* n, int s);
	~Student();
	void show(void);
};

void Student::show()
{
	cout << "name:" << name << " score：" << score <<endl;
}

Student::Student(char* n, int s)
{
	name = new char[strlen(n) + 1];
	strcpy(name,n);

	score = s;

	cout << "Object intialized." << endl;
}

Student::~Student()
{
	delete name;
	cout << "Object destroyed." << endl;
}

int main()
{
	Student student1((char*)"yujingchuan", 99);
	student1.show();
	return 0;
}
