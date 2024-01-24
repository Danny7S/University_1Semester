#include<stdio.h>
void main()
{
	float A[15];
	int n;
	printf("Array length:");
	scanf("%d",&n);
	while((n<5)||(n>15))
	{
		printf("Array length(between 5 and 15):");
		scanf("%d",&n);
	}
	for(int i=0;i<n;i++)
	{
		printf("Input number:");
		scanf("%f",&A[i]);
	}
	int c;
	for(int j=0;j<n;j++)
	{
		if (j==0)
		{
			c=A[j];
		}
		else
		{
			if(c>A[j])
			{
				c=A[j];
			}
		}
	}
	printf("The lowest number in the array is: %d",c);
}