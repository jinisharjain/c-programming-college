#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
float div(int, int);
int fact(int);

void main()
{
    int ch, a, b, result1;
    float result2;
    printf("1. ADDITION \n");
    printf("2. SUBTRACTION \n");
    printf("3. MULTIPLICATION \n");
    printf("4. DIVISION \n");
    printf("5. FACTORIAL \n");
    printf("Enter choice: ");
    scanf("%d", &ch);
    if(ch>=1 && ch<=4)
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
    }
    else if(ch==5)
    {
        printf("Enter your number: ");
        scanf("%d", &a);
    }
    switch (ch)
    {
        case 1: result1 = add(a, b);
        printf("%d", result1);
        break;
        case 2: result1 = sub(a, b);
        printf("%d", result1);
        break;
        case 3: result1 = mul(a, b);
        printf("%d", result1);
        break;
        case 4: if(b==0)
                {
                    printf("Cannot be divided by zero");
                }
                else
                {
                    result2 = div(a, b);
                    printf("%f", result2);
                }
        break;
        case 5: result1 = fact(a);
        printf("%d", result1);
        break;
        default : printf("Invalid choice.");
    }
}
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
float div(int a, int b)
{
    return (float)a/b;
}
int fact(int a)
{
    int i;
    int fac = 1;
    for(i=1; i<=a; i++)
    {
        fac = fac*i;
    }
    return fac;
}
