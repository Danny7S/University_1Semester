#include <stdio.h>
#include< stdint.h >
void main() 
{
	//char -128 to +127
	//int -2,147,483,648 to 2,147,483,647
	//unsigned int 4,294,967,295
	//unsigned char 0 to 255
	int charr=127, ch;
	int intt=INT32_MAX;
	int inter;
	int unsigned_intt=UINT64_MAX, unin;
	int unsigned_charr=255, unch;	
	
	printf("Input max char:");
	scanf("%d",&ch);
	while(ch!=charr)
	{
		printf("Wrong!Try again!");
		printf("Input max char:");
		scanf("%d",&ch);
	}
	
	printf("Input max int:");
	scanf("%d",&inter);
	while(inter!=intt)
	{
		printf("Wrong!Try again!");
		printf("Input max int:");
		scanf("%d",&inter);
	}
	
	printf("Input max unsigned int:");
	scanf("%d",&unin);
	while(unin!=unsigned_intt)
	{
		printf("Wrong!Try again!");
		printf("Input max unsigned int:");
		scanf("%d",&unin);
	}
	
	printf("Input max unsigned char:");
	scanf("%d",&unch);
	while(unch!=unsigned_charr)
	{
		printf("Wrong!Try again!");
		printf("Input max unsigned char:");
		scanf("%d",&unch);
	}
}