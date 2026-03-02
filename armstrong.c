#include <stdio.h>

void main()
{
    int num, originalNum, digit;
    int sum = 0;

    printf("Enter a three digit number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (sum == originalNum)
    {
        printf("%d is an Armstrong number.", originalNum);
    }
    else
    {
        printf("%d is NOT an Armstrong number.", originalNum);
    }
}
