#include <stdio.h>

int main() {
    char operation;
    printf("Declare operation(+,-,*,/): ");
    scanf(" %c", &operation);
    int a, b;
    printf("Input A: ");
    scanf("%d", &a);
    printf("Input B: ");
    scanf("%d", &b);
    if (operation == '+') {
        printf("%d + %d = %d", a, b, a + b);
    }
    else if (operation == '-') {
        printf("%d - %d = %d", a, b, a - b);
    }
    else if (operation == '*') {
        printf("%d * %d = %d", a, b, a * b);
    }
    else if (operation == '/') {
        printf("%d / %d = %d", a, b, a / b);
    }
    return 0;
}