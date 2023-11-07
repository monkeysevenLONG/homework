#include <stdio.h>

struct peop_date func_ini(struct peop_date);

struct peop_date {
	int x=1;
	int y=1;
	int z=1;
	int liveline=10;
};

int main()
{
	
	struct peop_date Bob;

	Bob = func_ini(Bob);

	printf("%d %d %d %d", Bob.x, Bob.y, Bob.z, Bob.liveline);

	return 0;
}

struct peop_date func_ini(struct peop_date a)
{
	a.x = 0;
	a.y = 0;
	a.z = 0;
	a.liveline = 100;
	return a;
}

