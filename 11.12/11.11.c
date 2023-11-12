#include <stdio.h>

int main()
{
	void compare(int* x, int* y, int* z);
	int a, b, c;
	int* p1,*p2, *p3;
	p1 = &a; p2 = &b; p3 = &c;
	printf("请输入三个数字；");
	scanf_s("%d,%d,%d", &a,&b,&c);
	compare(p1, p2, p3);
	printf("%d %d %d", a, b, c);
	return 0;
}

void compare(int* x, int* y,int* z)
{
	void swap(int* x, int* y);
	if (*x < *y) swap(x, y);
	if (*x < *z) swap(x, z);
	if (*y < *z) swap(y, z);
}
void swap(int* x, int* y)
{
	int max1 ;
	max1 =*x;
	*x = *y;
	*y = max1;
}

 