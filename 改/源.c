#include <stdio.h>
void mul(int n, int m) {
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
}
