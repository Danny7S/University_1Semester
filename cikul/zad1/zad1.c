#include <stdio.h>
void main() 
{
	int i=0;
	goto cikul;
	cikul:
		if(i<5)
		{
			i++;
			printf("Hello!\n");
			goto cikul;
		}
		
}