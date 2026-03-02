#include <stdio.h>

void main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    i = 1;

    while (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i = i + 1;
    }
}
