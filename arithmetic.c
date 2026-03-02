#include <stdio.h>

void main()
{
    int choice;
    float num1, num2, result;

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (choice == 1)
    {
        result = num1 + num2;
        printf("Result = %.2f", result);
    }
    else
    {
        if (choice == 2)
        {
            result = num1 - num2;
            printf("Result = %.2f", result);
        }
        else
        {
            if (choice == 3)
            {
                result = num1 * num2;
                printf("Result = %.2f", result);
            }
            else
            {
                if (choice == 4)
                {
                    if (num2 != 0)
                    {
                        result = num1 / num2;
                        printf("Result = %.2f", result);
                    }
                    else
                    {
                        printf("Division by zero is not allowed.");
                    }
                }
                else
                {
                    printf("Invalid choice.");
                }
            }
        }
}
