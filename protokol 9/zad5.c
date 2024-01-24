#include <stdio.h>
#include <stdbool.h>
bool Is_Triangle(int a, int b, int c)
{
	if ((a + b < c) || (b + c < a) || (c + a < b))
	{
		return false;
	}
	else
	{
		return true;
	}
}
void main()
{
	int a, b, c;
	printf("Input a:");
	scanf("%d", &a);
	printf("Input b:");
	scanf("%d", &b);
	printf("Input c:");
	scanf("%d", &c);
	if (Is_Triangle(a, b, c))
	{
		printf("ABC is triangle");
	}
	else
	{
		printf("ABC is not triangle");
	}

}