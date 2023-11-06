#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1 

long int fun_c(long int, long int);
long int fun_n(long int);

int main()
{
	long int m, n, c;
	c = 0;
	n = 1;
	m = 1;
	printf("plesse input c(m,n):");
	scanf_s("%d%d", &m, &n);
	c = fun_c(m, n);
	printf("c(%d,%d)=%d", m, n, c);

	return 0;

}
long int fun_c(long int a, long int b)
{
	return (fun_n(a) / (fun_n(b) * fun_n(a - b)));
}

long int fun_n(long int a)
{
	if (a <= 1) return 1;
	else return (a * fun_n(a - 1));
}