#include <stdio.h>
int main() {
	int a[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &a[i][j]);
		}
	}
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 3; i++) {
		sum1 = sum1 + a[i][i];
	}
	for (int i = 0; i < 3; i++) {
		sum2 = sum2 + a[i][2 - i];
	}
	printf("%d", sum1 + sum2);
	return 0;
}
