#include<stdio.h>
#include<math.h>
void main()
{
	// Декларираме и присвояваме променливите
	int a,b;

	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	
	printf("a*b=%d\n",a*b); 
	printf("a+b=%d\n",a+b);
	printf("a-b=%d\n",a-b);
	printf("a/b=%d\n",a/b); // целочислено деление
	printf("a % b=%d\n",a%b);// % оператор за намиране на остатък при деление
}