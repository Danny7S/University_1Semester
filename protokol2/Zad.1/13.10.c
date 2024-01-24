#include<stdio.h>
void main()
{   
	// Декларираме променливите
	int a,b;

	//Присвояваме им стойности
	printf("Enter a : ");
	scanf("%d",&a); 
	printf("Enter b : ");
	scanf("%d",&b);

	// Намираме и извеждаме лицето
	printf("Surface= %d\n",2+a+2*b);
	printf("Area= %d",a*b);
}