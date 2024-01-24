#include<stdio.h>
#include<math.h>
void main()
{
	// Декларираме променливите
	int a, b;

	//Присвояваме им стойности
	printf("Enter a : ");
	scanf("%d", &a);
	printf("Enter b : ");
	scanf("%d", &b);

	// Намираме с чрез питагорова теорема
	int c=floor(sqrt(a*a+b*b)); 
	// Намираме лицето и обиколката по 3 страни
	printf("The surface of the triangle is %d\n",a+b+c);
	printf("The area of the triangle is %d",a*b/2);
}