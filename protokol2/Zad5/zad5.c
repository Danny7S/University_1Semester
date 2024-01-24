#include<stdio.h>
#include<math.h>
void main()
{
	//Декларираме а от тип float
	//защото очакваме действия, включващи дробна запеая
	float a;
	printf("Number of days on Earth:");
	scanf("%f",&a);
	printf("%.0f days on Earth equals:%f years on Jupiter",a,a/(12*365));
}