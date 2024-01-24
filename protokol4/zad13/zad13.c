#include<stdio.h>
void main()
{
	int a, b, c;
	printf("Input A:");
	scanf("%d", &a);
	printf("Input B:");
	scanf("%d", &b);
	printf("Input C:");
	scanf("%d", &c);
	if ((a+b>c) && (a+c>b) && (c+b>a)) printf("ABC is a triangle");
	else printf("ABC is not a triangle");

}
