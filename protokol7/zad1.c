#include <stdio.h>
void main()
{
	int arr[3][3][3];
	int a =1
		for (int i = 0;i < 3;i++)
		{
			for (int j = 0; j < 3; j++)
			{
				for (int k = 0; k < 3; k++)
				{
					arr[i][j][k] = a;
					a++;
				}
			}
		}
		for (int i = 0;i < 3;i++)
		{
			for (int j = 0; j < 3; j++)
			{
				for (int k = 0; k < 3; k++)
				{
					printf("%d\n", arr[i][j][k]);
				}

			}
		}
}
