#include <stdio.h>
void main()
{
	int A[3][3];
	int c = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = i+1; j < 3; j++)
		{
			if (A[j][i] < 0)
			{
				A[j][i] = -A[j][i];
			}
			c = A[i][j];
			A[i][j] = A[j][i];
			A[j][i]=c;

		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}