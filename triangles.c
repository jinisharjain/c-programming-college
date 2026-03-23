#include<stdio.h>
int main()
{
   int a,b,c; 
   scanf("%d %d %d",&a, &b, &c);
   if((a+b<=c) || (b+c<=a) || (c+a<=b))
   {
     printf("Triangle is not possible");
   }
   else
   {
     if((a*a + b*b == c*c) || (b*b + c*c == a*a) || (c*c + a*a == b*b))
     {
       printf("Right-angle Triangle");
     }
     else if(a==b && b==c)
     {
       printf("Equilateral Triangle");
     }
     else if(a==b || b==c || c==a)
     {
       printf("Isosceles Triangle");
     }
     else
     {
       printf("Scalene Triangle");
     }
   }
}
