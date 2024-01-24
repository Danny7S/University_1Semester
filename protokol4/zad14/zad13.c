#include<stdio.h>
void main()
{
	int score;
	printf("Your Score:");
	scanf("%d", &score);
	if ((80 <score) && (score <= 100))
	{
		printf("Excellent");
	}
	else if ((60 < score) && (score <= 80))
	{
		printf("Well Done");
	}
	else if ((40 < score) && (score <= 60))
	{
		printf("Good");
	}
	else if ((20 < score) && (score <= 40))
	{
		printf("Bad");
	}
	else
	{
		printf("Poor");
	}
}
