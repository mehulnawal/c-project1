// temp convertor

#include <stdio.h>

void main()
{
    // F = (9/5 × °C) + 32
    float celsius, far;

    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);

    far = (((float)9 / 5) * celsius) + 32;

    printf("The temperature in Fahrenheit: %.2f", far);
}