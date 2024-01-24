#include <stdio.h>
void main()
{
	int arr[5][5];
	int sum=0;
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("Input:");
			scanf("%d", &arr[i][j]);
			if (i == j)
			{
				sum += arr[i][j];
			}
		}
	}
	printf("Sum of the numbers on the main diagonal is %d", sum);
}