#include<stdio.h>
int bubble(int arr[],int size){
    int i,j,temp;
    for(i=0;i<size-1;i++){
       for(j=0;j<size-i-1;j++){
          if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
         }
        } 
    return 0;         
}
int main(){
     int i,arr[]={33,12,65,23,8};
     bubble(arr,5);
     printf("sorted elements are : ");
     for(i=0;i<5;i++){
     printf("%d ",arr[i]);
     }
     
     return 0;
 }    
