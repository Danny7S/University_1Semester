#include<stdio.h>
void main()
{
	int a,b;
	printf("Input A:");
	scanf("%d",&a);
	if(a<0) printf("a is negative");
	else if (a>0) printf("a is positive");
	else printf("a equals 0");
}