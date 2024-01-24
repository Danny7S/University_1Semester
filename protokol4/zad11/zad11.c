#include<stdio.h>
void main()
{
	int a,b,c;
	printf("angle alpha:");
	scanf("%d",&a);
	printf("angle beta:");
	scanf("%d",&b);
	c=180-(a+b);
	if(a==90 || b==90 || c==90) printf("The triangle is Right Triangle ");
	if(a>90 || b>90 || c>90) printf("The triangle is Obtuse Triangle");
	else printf("The triangle is Acute Triangle ");
	
}
