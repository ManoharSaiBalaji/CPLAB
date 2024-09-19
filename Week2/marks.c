#include<stdio.h>
int main(){
 float x;
 scanf("%f",&x);
  if(x>=90 && x<100)
    printf("s");
  else if(x>=80 && x<90)
         printf("A");
  else if(x>=70 && x<80)
         printf("B");
  else if(x>=60 && x<70)
         printf("C");
  else if(x>=50 && x<60)
         printf("D");
  else if(x>=40 && x<50)
         printf("E");
  else 
         printf("F");
  }
