#include<stdio.h>
#include<math.h>
void main()
{
	int kg;
	printf("Your wight in kg:");
	scanf("%d",&kg);
	float n=(kg*9.8)*17/100;
	printf("Your weight on Moon in N:%f",n);
}