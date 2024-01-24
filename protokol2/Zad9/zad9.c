#include<stdio.h>
#include<math.h>
void main()
{
    float floatValue;
    char charValue;
    int intValue;

    // Input values from the user
    printf("Enter a float value: ");
    scanf("%f", &floatValue);
    printf("Enter a char value: ");
    scanf(" %c", &charValue);  // Note the space before %c
    printf("Enter an int value: ");
    scanf("%d", &intValue);

    // Display the entered values
    printf("Entered values are: float=%.2f, char=%c, int=%d\n", floatValue, charValue, intValue);

    // Increment and assign
    // First option: prefix increment
    floatValue = ++floatValue;
    charValue = ++charValue;
    intValue = ++intValue;

    // Display the values after prefix increment
    printf("After prefix increment: float=%.2f, char=%c, int=%d\n", floatValue, charValue, intValue);

    // Reset the entered values
    printf("Enter a float value: ");
    scanf("%f", &floatValue);
    printf("Enter a char value: ");
    scanf(" %c", &charValue);  // Note the space before %c
    printf("Enter an int value: ");
    scanf("%d", &intValue);

    // Second option: postfix increment
    floatValue = floatValue++;
    charValue = charValue++;
    intValue = intValue++;

    // Display the values after postfix increment
    printf("After postfix increment: float=%.2f, char=%c, int=%d\n", floatValue, charValue, intValue);
}