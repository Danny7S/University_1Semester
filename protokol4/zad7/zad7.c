#include<stdio.h>
void main()
{
	int a,b;
	printf("Input a:");
	scanf("%d",&a);
	printf("Input b:");
	scanf("%d",&b);
	if(a+b<=10) printf("Area of rectangle: %d",a*b);
	else printf("Surface of rectangle: %d",2*(a+b));
}
