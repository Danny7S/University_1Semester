#include <stdio.h>
void main()
{
	int arr[10][3];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j == 0)
			{
				printf("Input a:");
				scanf("%d", &arr[i][j]);
			}
			else
			{
				arr[i][j] = arr[i][j - 1] * arr[i][0];
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d  ", arr[j][i]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}
}
