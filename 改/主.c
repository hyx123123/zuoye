#include <stdio.h>
#include "标头.h"
void mul(int n, int m);
int main()
{
	int a, b;
	printf("请输入乘法表的行和列：");
	scanf_s("%d%d", &a, &b);
	mul(a, b);
}