#include <stdio.h>
void main()
{
	float arr[10];
	float sum=0;
	int a = 0;
	while ((sum<100)&&(a<10))
	{
		printf("Input a:");
		scanf("%f", &arr[a]);
		sum += arr[a];
		a++;
	}
	printf("The array is:");
	for (int i = 0; i < a; i++)
	{
		printf("%.2f ", arr[i]);
	}
}
