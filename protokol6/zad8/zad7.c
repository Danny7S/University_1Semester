#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("Input srting:");
	gets(str);
	for (int i = strlen(str) - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

}
