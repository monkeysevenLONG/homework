#include <iostream>
using namespace std;

void showmenu();
void report();
void comfort();

int main()
{
	showmenu();
	int choice;
	cin >> choice;
	while (choice != 5)
	{
		switch (choice)
		{
		case 1: cout << "\a\n";
			break;
		case 2: report();
			break;
		case 3:	cout << "the boss was in all day!" << endl;
			break;
		case 4:	comfort();
			break;
		default:cout << "that not is choice ." << endl;

		}
		showmenu();
		cin >> choice;
	}
	cout << "bye.\n";

		return 0;
}

void showmenu()
{
	cout << "please enter number 1,2,3,4,5:\n"
		"1)alarm		2)report\n"
		"3)alibi		4)comfort\n"
		"5)quit\n";
}

void comfort()
{
	cout << "hahaha" << endl;
}

void report()
{
	cout << "hello world\n";
}
