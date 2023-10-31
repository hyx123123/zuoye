#include <stdio.h>
int main()
{
	int n,m;
	scanf_s("%d%d", &n,&m);
	int i, j;
	i = 1;
	while (i <= n) {
		j = 1;
		while (j <= m) {
			printf("%d*%d=%d", j, i, i * j);
     		if (i * j < 10) {
				printf("   ");
			}
			else {
				printf("  ");
			}
			j++;
		}
		i++;
		printf("\n");
	}
	return 0;
}