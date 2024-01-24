#include <stdio.h>
void main()
{
	int A[20];
	int index, num, count;
	for (int i = 0; i < 20; i++)
	{
		printf("Input a:");
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < 20; i++)
	{
		if (A[i] == A[i + 1])
		{
			index = i;
			num = A[i];
			printf("%d is on indexes [%d] and [%d]\n", num, index, index + 1);
		}
		
	}

}
