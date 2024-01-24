#include<stdio.h>
#include<math.h>
void main()
{
    float a, b, c;
    float d;
    float first = 0, second = 0;
    printf("Input A:");
    scanf("%f", &a);
    printf("Input B:");
    scanf("%f", &b);
    printf("Input C:");
    scanf("%f", &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        first = (-b + sqrt(d)) / (2 * a);
        second = (-b - sqrt(d)) / (2 * a);
        printf("x1=%.0f & x2=%.0f", first, second);
    }
    else if (d == 0)
    {
        first = -b / (2 * a);
        printf("x=%.0f", first);
    }
    else
    {
        printf("No real roots");
    }
}