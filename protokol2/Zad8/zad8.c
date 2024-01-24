#include<stdio.h>
#include<math.h>
void main()
{
	float sm,mm,dm,m;
	printf("Radius in sm:");
	scanf("%f",&sm);
	mm = sm * 10;
	dm = sm / 10;
	m = sm / 100;
	
	printf("Surface in mm= %.0f\n",mm*2*3.14);
	printf("Area in mm: %.0f\n",4*mm*mm*3.14);
	printf("Volume in mm: %.0f ",(4/3)*3.14*mm*mm*mm);
	printf("");
	printf("Surface in dm= %.2f\n", dm * 2 * 3.14);
	printf("Area in dm: %.2f\n", 4 * dm * dm * 3.14);
	printf("Volume in dm: %.2f ", (4 / 3) * 3.14 * dm * dm * dm);
	printf("");
	printf("Surface in m= %f\n", m * 2 * 3.14);
	printf("Area in m: %f\n", 4 * m * m * 3.14);
	printf("Volume in m: %f ", (4 / 3) * 3.14 * m * m * m);
}