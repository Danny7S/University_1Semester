#include <stdio.h>
void main()
{
	int A[3][4];
	int B[3][4];
	int C[3][4];
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("Input in A:");
			scanf("%d", &A[i][j]);
			printf("Input in B:");
			scanf("%d", &B[i][j]);
			C[i][j] = A[i][j] * B[i][j];
		}
	}
	for (int i = 0;i < 4;i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d  ", C[j][i]);
		}
		printf("\n");
	}
}