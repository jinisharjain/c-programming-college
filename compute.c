#include<stdio.h>
#include<math.h>
void main()
{
  int choice,n,i;
  int a,b,result;
  printf("Calculating\n");
  printf("1. Square root of a number\n");
  printf("2. Square of a number\n");
  printf("3. Cube of a number\n");
  printf("4. If the number is a prime number\n");
  printf("5. Factorial of a number\n");
  printf("6. Prime factors of a number\n");
  printf("Enter the number: ");
  scanf("%d", &a);
  printf("Enter your choice: ");
  scanf("%d", &choice);
  switch (choice)
  {
    case 1:
        if(a>=0)
        {
        printf("The square root is: %.2f\n", sqrt(a));
        }
        else
        {
        printf("Square root not defined for negative numbers");
        }
        break;
    case 2:
        result = (a*a);
        printf("Result = %d\n", result);
        break;
    case 3:
        result = (a*a*a);
        printf("Result = %d\n", result);
        break;
    case 4:
        b=0;
        for(i=1; i<=a; i++)
        {
        if(a%i==0)
        {
        b++;
        }
        }
        if(b==2)
        {
        printf("Number is a Prime Number");
        }
        else
        {
        printf("Number is not a Prime Number");
        }
        break;  
    case 5:  
        result=1;
        for(i=1; i<=a; i++)
        {
        result = result*i;
        }
        printf("Factorial = %d\n", result);
        break;
    case 6:
        printf("The prime factors are: ");
        for(i=2; i<=a; i++)
        {
        while(a%i==0)
        {
        printf("%d\n", i);
        a = a/i;
        }
        }
        break;
    default:
        printf("Wrong choice");
  }
}
