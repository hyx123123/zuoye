#include <stdio.h>
void bubble_sort(int arr[], int sz) {
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main() {
	int b=0, c=0, d=0;
	int a[] = {a,b,c,d};
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &a[i]);
	}
	int sz = sizeof(a) / sizeof(a[0]);
	bubble_sort(a, sz);
	for (int i = 3; i>=0; i--) {
		printf("%d ", a[i]);
	}
	return 0;
}
