#include <stdio.h>
#include <string.h>

void main()
{
    char str[100], strtot[100];
    while (strlen(strtot) < 100)
    {
        printf("String input:");
        gets(str);
        if ((strlen(str)+ strlen(strtot)>100)|| strcmp(str, "quit") == 0)
        {
            break;
        }
        strcat(strtot, str);
    }
    printf("%s", strtot);
}