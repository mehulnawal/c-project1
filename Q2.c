#include <stdio.h>

void main()
{

    int salary;
    float hra, da, ta, gross_salary, hra_amt, da_amt, ta_amt;

    printf("Enter base salary: ");
    scanf("%d", &salary);

    printf("Enter base hra: ");
    scanf("%f", &hra);

    printf("Enter base da: ");
    scanf("%f", &da);

    printf("Enter base ta: ");
    scanf("%f", &ta);

    hra_amt = (salary * hra) / 100;
    da_amt = (salary * da) / 100;
    ta_amt = (salary * ta / 100);

    gross_salary = salary + hra_amt + da_amt + ta_amt;

    printf("\nans %.2f", gross_salary);
}