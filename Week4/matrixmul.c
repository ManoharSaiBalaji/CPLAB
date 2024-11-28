#include<stdio.h>
int main(){
  int a[10][10],b[10][10],c[10][10];
  int m,n,p,q,i,j,sum;
  printf("enter the size of a");
  scanf("%d%d",&m,&n);
  printf("\nenter the size of b");
  scanf("%d%d",&p,&q);
  
  printf("enter the elements of a\n");
  for(i=0;i<m;i++){
     for(j=0;j<n;j++){
         scanf("%d",&a[i][j]);
         }
     }  
   
        
  printf("enter the elements of b\n");
  for(i=0;i<p;i++){
     for(j=0;j<q;j++){
         scanf("%d",&b[i][j]);
         }
     }       
   if(n==p){
       
       for(i=0;i<m;i++){
           for(j=0;j<q;j++){
              sum=0;
              for(int k=0;k<n;k++){
                 sum=sum+a[i][k]+b[k][i];
                 }
              c[i][j]=sum;   
          
          }
        }
        
       for(i=0;i<m;i++){
         for(j=0;j<q;j++){
            printf("%d",c[i][j]);
         }
         printf("\n");
       }     
    }
    else
       printf("multiplication is impossible");
       
 }          
           
  
  
