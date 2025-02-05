#include<stdio.h>
int sort(int arr[],int size){
    int i,j,key;
    for(i=0;i<size;i++){
       key=arr[i];
       j=i-1;
       for(j=i-1;j>=0 && arr[j]>key;j--){
            arr[j+1]=arr[j];
        }
       arr[j+1]=key;
     }
   return 0;         
}
int main(){
     int i,arr[]={33,12,65,23,8};
     sort(arr,5);
     printf("sorted elements are : ");
     for(i=0;i<5;i++){
     printf("%d ",arr[i]);
     }
     
     return 0;
 }        
              
