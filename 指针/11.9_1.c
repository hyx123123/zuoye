#include <stdio.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a + 0));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(a[1]));
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(*&a));
	printf("%d\n", sizeof(&a + 1));
	printf("%d\n", sizeof(&a[0]));
	printf("%d\n", sizeof(&a[0] + 1));
	printf(" 123123123123123\n");
		char arr[] = { 'a','b','c','d','e','f' };
		printf("%d\n", sizeof(arr));
		printf("%d\n", sizeof(arr + 0));
		printf("%d\n", sizeof(*arr));
		printf("%d\n", sizeof(arr[1]));
		printf("%d\n", sizeof(&arr));
		printf("%d\n", sizeof(&arr + 1));
		printf("%d\n", sizeof(&arr[0] + 1));
		printf(" 123123123123123\n");

			char ar[] = { 'a','b','c','d','e','f' };
			printf("%d\n", strlen(ar));
			printf("%d\n", strlen(ar + 0));
			printf("%d\n", strlen(*ar));
			printf("%d\n", strlen(ar[1]));
			printf("%d\n", strlen(&ar));
			printf("%d\n", strlen(&ar + 1));
			printf("%d\n", strlen(&ar[0] + 1));

			return 0;
		}


