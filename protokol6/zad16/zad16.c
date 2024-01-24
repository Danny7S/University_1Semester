#include <stdio.h>
#include <string.h>
void main()
{
	int nomera[5];
	float uspeh[5];
	float avg = 0;
	for (int i = 0; i < 5 ; i++)
	{
		printf("Number of student: ");
		scanf("%d", & nomera[i]);
		printf("Number of student: ");
		scanf("%f", & uspeh[i]);
		printf("");
	}
	for (int i = 0; i < 5; i++)
	{
		avg += uspeh[i];
	}
	avg = avg / 5;
	for (int i = 0; i < 5; i++)
	{
		if (uspeh[i]>avg)
		{
			printf("Student number %d has score of %f\n", nomera[i], uspeh[i]);
		}
	}
}