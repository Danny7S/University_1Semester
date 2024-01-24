#include<stdio.h>
void main()
{
	int arr[5]={-3,5,41,22,6};
	int c;
	for(int i=0;i<5;i++)
	{
		if (i==0)
		{
			c=arr[i];
		}
		else
		{
			if(c<arr[i])
			{
				c=arr[i];
			}
		}
	}
	printf("The highesr number in the array is: %d",c);

}