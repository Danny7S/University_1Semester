#include<stdio.h>
void main()
{
	float A[10];
	float B[10];
	for(int i=0;i<10;i++)
	{
		printf("Input number:");
		scanf("%f",&A[i]);
	}
	printf("Array A: ");	
	for(int j=0;j<10;j++)
	{
		printf("%.0f ",A[j]);
	}
	for(int k=0;k<10;k++)
	{
		B[k]=A[k];
	}
	printf("\nArray B: ");	
	for(int l=0;l<10;l++)
	{
		printf("%.0f ",B[l]);
	}
	
}