#include <stdio.h>
#include <string.h>
void main()
{
    char c[100];
    int true = 0;
    printf("String input:");
    gets(c);
    int a = strlen(c);
    for (int i = 0; i < a; i++)
    {
        if (c[i]!=c[a-i-1])
        {
            true++;
        }
    }
    if (true==0)
    {
        printf("String is palindrome!");
    }
    else
    {
        printf("String is not palindrome!");
    }
}
