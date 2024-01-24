#include<stdio.h>
void main()
{
	float c,d,e;
	printf("Input c:");
	scanf("%f",&c);
	printf("Input d:");
	scanf("%f",&d);
	e=c/d;
	if(d!=0) printf("%.0f/%.0f=%.2f",c,d,e);
	else printf("You cannot divide by 0");
}
