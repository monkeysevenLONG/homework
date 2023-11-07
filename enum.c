#include <stdio.h>

enum color { red, green, blue };
char name[][10] ={
	"red",
	"green",
	"blue"
};
int main()
{
	enum color clr;
	for (clr = red; clr <= blue; clr++)
	{
		printf("%d % s\n",clr, name[clr]);
	}

	return 0;
}
