#include <stdio.h>
int Sum_of_two(int a, int b)
{
	return a + b;
}
void main()
{
	int a , b ;
	for (int i = 0; i < 6; i++)
	{
		a = 1;
		b = 1;
		printf("Sum of 2 and 3 both to the power of % d is:", i);
		if (i == 0)
		{
			a = 1;
			b = 1;
		}
		else
		{
			for (int j = 0; j < i; j++)
			{
				a = 2 * a;
				b = b * 3;
			}
		}
		int sum = Sum_of_two(a, b);
		printf("%d\n",sum);
		
		
	}
/*
#include <stdio.h>
	int Sum_of_two(int a, int b)
	{
		return a + b;
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
		int init_a = a;
		int init_b = b;
		for (int i = 0; i < c; i++)
		{
			a = a * init_a;
			b = b * init_b;

		}
		int sum = Sum_of_two(a, b);
		printf("Sum of %d and %d both to the power of %d is:%d", init_a, init_b, c, sum);


	}
*/
}