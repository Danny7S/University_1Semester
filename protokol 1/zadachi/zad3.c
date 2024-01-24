#include <stdio.h>
#include <string.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "en_US.UTF-8");
    printf("Hello world!\n");
    printf("Здравей свят!\n");
    printf("Hello\nworld\n");

}