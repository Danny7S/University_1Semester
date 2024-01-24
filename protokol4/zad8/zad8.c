#include<stdio.h>
void main()
{
	int a;
	printf("Input A:");
	scanf("%d",&a);
	if (a%7==0 && a%5==0) printf("%d can be divided by  both 5 and 7",a);
	else if (a%7==0) printf("%d can be divided by 7",a);
	else if(a%5==0) printf("%d can be divided by 5",a);
}
