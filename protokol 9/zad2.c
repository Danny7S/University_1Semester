#include <stdio.h>
int Val_of_y(int x)
{
	if (x <= 1)
	{
		return x * x + 4 * x;
	}
	else if (x > 4)
	{
		return 2 * x + 3;
	}
	else
	{
		return 3 * x + 2;
	}
}
void main()
{
	int x,y;
	printf("Input x:");
	scanf("%d", &x);
	y = Val_of_y(x);
	printf("y=%d", y);


}