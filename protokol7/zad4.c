#include <stdio.h>
void main()
{
	int arr[7][2];
	int one_count = 0;
	int two_count = 0;
	int three_count = 0;
	for (int i = 0;i < 7;i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("Input:");
			scanf("%d", &arr[i][j]);
			if (arr[i][j] == 1)
			{
				one_count++;
			}
			if (arr[i][j] == 2)
			{
				two_count++;
			}
			if (arr[i][j] == 3)
			{
				three_count++;
			}
		}
	}
	if ((one_count >= three_count) && (one_count >= two_count))
	{
		printf("1 is the most common number in this array!(%d times)", one_count);
	}
	else if ((two_count > one_count) && (two_count >= three_count))
	{
		printf("2 is the most common number in this array!(%d times)", two_count);
	}
	else
	{
		printf("3 is the most common number in this array!(%d times)", three_count);
	}
}