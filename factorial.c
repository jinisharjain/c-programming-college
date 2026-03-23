#include<stdio.h>
void main()
{
    int n;
    long int fact; 
    scanf("%d",&n);
    int i = 1;
    fact =1;
    if(n<0)
    {
      printf("Factorial is not defined for negative numbers.");
    }
    else
    {
    while(i<=n)
    {
      fact = fact*i;
      i++;
    }
    printf("The Factorial of %d is : %ld",n , fact);
    }
}
