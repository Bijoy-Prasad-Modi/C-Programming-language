#include <stdio.h>

void Strcpy(char *ptr2, char *ptr1)
{
	int i = 0;
	while (*(ptr1 + i) != '\0')
	{
		*(ptr2 + i) = *(ptr1 + i);
		i++;
	}
	*(ptr2 + i) = '\0';
}

int main()
{
	char str1[] = "Hello";
	char str2[] = "World";
	Strcpy(str2, str1);
	printf("%s", str2);
	return 0;
}