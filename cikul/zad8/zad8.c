#include <stdio.h>
void main() 
{
	int n,sum=0;
	printf("Input n:");
	scanf("%d",&n);
	for(int i=n; i>=0;i--)
	{
		sum += i;
	}
	printf("%d ",sum);
}