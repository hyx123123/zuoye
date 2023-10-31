#include <stdio.h>
int get(int x, int y, int z);

int main() {
	
	int a, b, c;
	scanf_s("%d%d%d",&a,&b,&c);
	
	printf("%d",get(a,b,c));
	return 0;


}
int get(int x, int y, int z)
{
	int max;
	if (x > y && x > z)
		max = x;
	else if (y > z && y > x)
		max = y;
	else if (z > x && z > y)
		max = z;

	return max;
}
