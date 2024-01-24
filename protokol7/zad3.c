#include <stdio.h>
void main()
{
	int arr[5][5];
	int min;
	int indexi=0;
	int indexj=0;
		for (int i = 0;i < 5;i++)
		{
			for (int j = 0; j < 5; j++)
			{
					printf("Input:");
					scanf("%d", &arr[i][j]);
			}
		}
		min = arr[0][0];
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0; j < 5; j++)
		{

				if (arr[i][j] < min)
				{
					min = arr[i][j];
					indexi = i;
					indexj = j;
				}
		}
	}
	printf("The lowest number is %d [%d][%d]", min, indexi, indexj);
}