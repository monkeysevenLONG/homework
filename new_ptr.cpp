#include <iostream>
#include <string>

using namespace  std;

class Text {
private:char* str;
public:Text(const char* ch);
	  ~Text();
	  void show();
};
Text::Text(const char* ch)
{
	str = new  char[strlen(ch) + 1];
	strcpy_s(str, strlen(ch) + 1, ch);
	cout << "Object initiakized" << endl;
}
Text::~Text()
{
	delete [strlen(str)+1]str;
	cout << "Object destroy" << endl;
}

void Text::show()
{
	cout << str << endl;
}

int main()
{
	Text string("易雅玲");
		string.show();

	return 0;
}