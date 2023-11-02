#include <stdio.h>

//排序数组 a[10]中的元素。用数组指针的方式。

void sort(int a[]);

int main()
{
	int a[10] = { 1,3,5,7,9,2,4,6,8,0 };

	sort(a);
	for (int i = 0; i < 10; i++)
		printf("a[%d]=%d\n", i, a[i]);
	return 0;
}

void sort(int a[])
{
	int temp = 0;
	for (int j = 9; j >= 0; j--){
		for (int i = 0; i < j; i++) {

			if (a[i] > a[i + 1]) {
				temp = a[i + 1];
				a[i + 1] = a[i];
				a[i] = temp;
			}
		}
	}
}
