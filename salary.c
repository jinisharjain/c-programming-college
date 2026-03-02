#include <stdio.h>

void main()
{
    float basicPay, hra, ta, grossSalary, professionalTax, netSalary;

    printf("Enter basic pay: ");
    scanf("%f", &basicPay);

    hra = basicPay * 0.10;
    ta = basicPay * 0.05;

    grossSalary = basicPay + hra + ta;

    professionalTax = grossSalary * 0.02;

    netSalary = grossSalary - professionalTax;

    printf("Basic Pay = %.2f\n", basicPay);
    printf("HRA = %.2f\n", hra);
    printf("TA = %.2f\n", ta);
    printf("Gross Salary = %.2f\n", grossSalary);
    printf("Professional Tax = %.2f\n", professionalTax);
    printf("Net Salary = %.2f\n", netSalary);
}
