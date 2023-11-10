#include <stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	printf("%d %d\n", ppa, &pa);
	printf("%d %d", **ppa, *pa);

	return 0;
}