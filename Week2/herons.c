#include<stdio.h>
#include<math.h>
int main()
{
 float s,a,b,d,c;
 scanf("%f%f%f%f",&a,&b,&c,&s);
   d = sqrt(s*(s-a)*(s-b)*(s-c));
   printf("%f",d);
   }
