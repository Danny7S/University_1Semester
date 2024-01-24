#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Input a:");
	scanf("%d",&a);
	printf("Input b:");
	scanf("%d",&b);
	printf("Input c:");
	scanf("%d",&c);
	if(a<b) a=b;
	if(a<c) a=c;
	printf("The highest number is %d",a);
}
