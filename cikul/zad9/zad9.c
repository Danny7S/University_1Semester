#include <stdio.h>
void main() 
{
	int n;
	int fact=1;
	printf("Input n:");
	scanf("%d",&n);
	for(int i=n; i>0;i--)
	{
		fact=fact*i;
	}
	printf("%d!=%d",n,fact);
}