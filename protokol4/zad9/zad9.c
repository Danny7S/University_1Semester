#include<stdio.h>
void main()
{
	int a,b;
	printf("Input a:");
	scanf("%d",&a);
	printf("Input b:");
	scanf("%d",&b);
	if(a%2==0&&b%2==0) printf("%d+%d=%d",a,b,a+b);
	else if (a%2==1&&b%2==1) printf("%d-%d=%d",a,b,a-b);
	else printf("%d*%d=%d",a,b,a*b);
}
