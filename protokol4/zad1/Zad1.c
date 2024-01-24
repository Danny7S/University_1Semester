#include<stdio.h>
void main()
{
	int a,b;
	printf("Input A:");
	scanf("%d",&a);
	
	printf("Input B:");
	scanf("%d",&b);
	
	if(a==b) printf("%d equals %d",a,b);
	else printf("%d does not equal %d",a,b);
}