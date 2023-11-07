#include <stdio.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src)//×·¼Ó
{
	char* ret = dest;
	assert(dest && src);
	while (*dest != '\0')
	{
			dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
char* my_strcpy(char* dest, const char* src) //¿½±´
{
	assert(dest && src);
	char* ret = dest;
	while (*src != '\0')
	{
		*dest++ = *src++;;
	}
	*dest = *src;
	return ret;
}
int main()
{
	char name2[] = "abcdef";
	char name3[] = "gh";
	char name1[21] = { 0 };
	my_strcpy(name1, name2);
	my_strcat(name1, name3);
	printf("%s",name1);
}