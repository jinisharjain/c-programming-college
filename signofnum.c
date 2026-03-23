#include <stdio.h>
int main()
{
    double number;
    scanf("%lf", &number); 
    printf("The number is 0.");
    printf("Negative number.");
    printf("Positive number.");  
    if(number==0)
    {
      printf("The number is zero");
    }
    else if(number>0)
    {
      printf("The number is positive");
    }
    else
    {
      printf("The number is negative");
    }
}
