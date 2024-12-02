#include <stdio.h>

void main ()
{
    int temp,cel;

    printf("Enter temperature in Celsius: ");
    scanf("%d", &cel);
    temp = (9/5)*cel + 32;
    printf("Temperature in Fahrenheit: %d\n", temp);
    
}
