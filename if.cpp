#include <iostream>
using namespace std;

int main()
{
	char ch;
	int count=0;
	int toltal=0;

	cin.get(ch);
	//cout << ch << endl;
	while (ch != '.')
	{
		if (ch == ' ')
		{
			count++;
		}
		toltal++;
		cin.get(ch);
	}
	cout << count << " count " << toltal;
	cout << " characters total in sentence\n";

	return 0;
}
