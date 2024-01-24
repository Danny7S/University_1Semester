#include <stdio.h>
void main()
{
	int arr[5][3];
	int sumt;
	int sum;
	int num_of_row;
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Input:");
			scanf("%d",&arr[i][j]);
		}
	}
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d  ", arr[j][i]);
		}
		printf("\n");
	}
	for (int i = 0;i < 3;i++)
	{
		sum = 0;
		for (int j = 0; j < 5; j++)
		{
			sum += arr[j][i];
		}
		if (i == 0)
		{
			sumt = sum;
			num_of_row = i;
		}
		if (sum > sumt)
		{
			sumt = sum;
			num_of_row = i;
		}
	}
	printf("The row with the highest sum is %d and the sum is %d",num_of_row,sumt);
}
