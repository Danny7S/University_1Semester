#include <stdio.h>

int Subirane(int a, int b)
{
    return a + b;
}

int Izwajdane(int a, int b)
{
    return a - b;
}

int Umnojenie(int a, int b)
{
    return a * b;
}

float Delenie(int a, int b)
{
    return (float)a / b;
}

int main(void)
{
    int a, b;

    printf("Input a: ");
    scanf("%d", &a);

    printf("Input b: ");
    scanf("%d", &b);

    printf("a + b = %d\n", Subirane(a, b));
    printf("a - b = %d\n", Izwajdane(a, b));
    
    // Check for division by zero
    if (b != 0)
    {
        printf("a / b = %f\n", Delenie(a, b));
    }
    else
    {
        printf("Division by zero is undefined.\n");
    }

    printf("a * b = %d\n", Umnojenie(a, b));

    return 0;
}
