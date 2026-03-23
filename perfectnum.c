#include <stdio.h>
int main()
{
int N; 
scanf("%d",&N);
int i;
int sum =0;
for(i=1;i<N; i++)
{
  if(N%i==0)
  {
    sum = sum + i;
  }
}
if(sum==N && N>0)
{
  printf("%d is a perfect number.", N);
}
else
{
  printf("%d is not a perfect number.", N);
}
}
