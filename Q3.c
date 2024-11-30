#include <stdio.h>

void main()
{

    int a1, a3;

    printf("Enter value of angle 1: ");
    scanf("%d", &a1);

    if (a1 < 90)
    {

        a3 = 180 - (90 + a1);
        printf("\nThe value of angle 3 is: %d", a3);
    }
    else
    {
        printf("\nThe value of angle 1 should be less than 90");
    }
}