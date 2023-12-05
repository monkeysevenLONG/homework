#include <iostream>

int main()
{
	char ch;

	std::cout << "type,and i shell repeat.\n";
	std::cin.get(ch);
	while (ch != '.')
	{ 
		if (ch == '\n')
			std::cout << ch;
		else
			std::cout << ++ch;
		std::cin.get(ch);
	}
	return 0;
}