#include <stdio.h>
int Fibonachi(int a)
{
	int i = 1;
	int y = 1;
	int c=0;
	while (i<=a)
	{
		c = i;
		i = y+c;
		y = c;
	}
	return i;

}
void main()
{
	int x, y;
	printf("Input x:");
	scanf("%d", &x);
	y = Fibonachi(x);
	printf("%d", y);
}