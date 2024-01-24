#include <stdio.h>
void Devidable_by_five(int a)
{
	int first = a;
	int second = a * a;
	int third = 3 * a;
	if (first%5==0)
	{
		printf("%d\n", first);
	}
	if (second % 5 == 0)
	{
		printf("%d\n", second);
	}
	if (third % 5 == 0)
	{
		printf("%d", third);
	}
}
void main()
{
	int x;
	printf("Input x:");
	scanf("%d", &x);
	Devidable_by_five(x);
}