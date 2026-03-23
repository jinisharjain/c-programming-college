#include <stdio.h>  
void main()
{
int N, sum=0; 
scanf("%d", &N);
int i = 0;
while(i<=N)
{
  if(i%2==0)
  {
    sum = sum + i;
  }
  else
  {
    sum = sum + 0;
  }
  i++;
}
printf("Sum = %d", sum);
}
