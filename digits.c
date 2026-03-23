#include <stdio.h>
int main()
{
int N; 
scanf("%d",&N); 
int count=0;
int temp = N;
if(N==0)
{
  count = 1;
}
while(temp!=0)
{
  temp=temp/10;
  count++;
}
printf("The number %d contains %d digits.", N, count);
}
