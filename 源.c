#include <stdio.h>
int main() {
	int a[20] = { 0,1,1 };
	for (int i = 3; i < 20; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	for (int i = 0; i < 20; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

