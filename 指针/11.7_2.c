#include <stdio.h>
#include <string.h>
int main()
{
	char name[21];
	memset(name, 0, sizeof(name));
	strcpy_s(name,sizeof(name)/sizeof(name[0]),"hello");
	printf("%s\n", name);
	printf("%d\n", strlen(name));
	printf("%d", sizeof(name));

	return 0;
}