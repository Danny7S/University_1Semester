#include<stdio.h>
void main()
{
	int A[15],B[15],C[15];
	int countr=0;
	for(int i=0;i<15;i++)
	{
		printf("Input number:");
		scanf("%d",&A[i]);
	}
	for(int k=0;k<15;k++)
	{
		if(A[k]%2==0)
		{
			B[countr]=A[k];
			C[countr]=k;
			countr++;
		}
	}
	for(int j=0;j<countr;j++)
	{
		printf("%d ",B[j]);
		
	}
	printf("\n");
	for(int l=0;l<countr;l++)
	{
		printf("%d ",C[l]);
		
	}
}
