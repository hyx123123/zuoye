#include <stdio.h>
#include"dminͷ.h"
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10.11 };
	int max, min;
	max = dmax(a);
	min = dmin(a);
	printf("max=%d,min=%d", max, min);
	return 0;
}
