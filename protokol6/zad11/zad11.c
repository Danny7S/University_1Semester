#include <stdio.h>
#define N 10
void main()
{
	int a=0;
	int A[N], B[N];
	for (int j = a; j < N; j++)
	{
		printf("Input a:");
		scanf("%d", &A[j]);
		if (A[j] % 2 == 1)
		{
			B[a] = A[j];
			a++;
		}
	}
	for (int i = 0; i < a; i++)
	{
		printf("%d ", B[i]);
	}
}
