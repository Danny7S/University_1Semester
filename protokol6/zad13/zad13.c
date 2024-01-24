#include <stdio.h>
void main()
{
	int arr[10] ,arr2[10];
	int true = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("Input a:");
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("Input b:");
		scanf("%d", &arr2[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] != arr2[i])
		{
			true++;
		}
	}
	if (true == 0)
	{
		printf("Array1 == Array2");
	}
	else
	{
		printf("Array1 != Array2");
	}
}
