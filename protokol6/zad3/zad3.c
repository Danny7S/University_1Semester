
#include<stdio.h>
void main()
{
	float arr[5]={3.5 , 4 , 5 , 3, 4.5};
	float sum=0;
	for(int i=0;i<5;i++)
	{
		sum+=arr[i];
	}
	printf("%.1f",sum/5);	
}
