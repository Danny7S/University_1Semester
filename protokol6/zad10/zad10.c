#include <stdio.h>
#include <string.h>
void main()
{
    char c;
    char str[7] = {"rotate"};
    int len = strlen(str) / 2;
    for (int i = 0; i < len; i++)
    {
        c = str[i];
        str[i]= str[strlen(str) - i-1];
        str[strlen(str) - i-1] = c;
    }
    printf("%s", str);
}
    